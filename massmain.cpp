#include "massmain.h"
#include "ui_massmain.h"

//########################################################################## Constructor/Destructor
MassMain::MassMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MassMain)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    format="PNG";
    ui->setupUi(this);
    setAcceptDrops(true);
    ui->Options->hide();
    setWindowIcon(QIcon(":/IMG/ico"));
    ui->QualityBar->setRange(-1,100);
    ui->settingsTextField->setText(tr("Przetwarzam na format: ") + format + "\t" + tr("Jakość: auto"));
    listOfElements = new QList <MPImage*>;
    updateList();
}

MassMain::~MassMain()
{
    delete ui;
}

//########################################################################## Drag & Drop

void MassMain::dragEnterEvent(QDragEnterEvent *event)
{
     if (event->mimeData()->hasText())
         event->acceptProposedAction();
}

void MassMain::dropEvent(QDropEvent *event)
{
    QByteArray _imageFormat;
    QUrl *_url = NULL;
    QStringList _list = event->mimeData()->text().split(QRegExp("[\r\n]"),QString::SkipEmptyParts);
    for(int i=0;i<_list.count();i++)
    {
        _url = new QUrl(_list.at(i));
        _imageFormat = QImageReader::imageFormat(_url->toLocalFile());
        if(_imageFormat != "")
        {
            addToList(_url->toLocalFile());
            event->acceptProposedAction();
            updateList();
        }
        free(_url);
    }
    _url = NULL;
}
//########################################################################## List Actions
void MassMain::addToList(QString where)
{
    imagePointer = new MPImage(where);
    connect(imagePointer,SIGNAL(done()),this,SLOT(updateList()));
    listOfElements->append(imagePointer);
    imagePointer = NULL;
}

void MassMain::updateList()
{
    ui->listWidget->clear();
    QString _name;
    for(int i=0;i<listOfElements->count();i++)
    {
        _name = listOfElements->at(i)->path +" - "+listOfElements->at(i)->status;
        ui->listWidget->addItem(_name);
    }
}
void MassMain::clearList()
{
    int _howMany = listOfElements->count();
    int i=0;
    while(i < _howMany)
    {
        imagePointer = listOfElements->at(i);
        if((imagePointer->status == tr("ukończony")) or (imagePointer->status == tr("czeka")))
        {
            listOfElements->removeAt(i);
            imagePointer->disconnect();
            free(imagePointer);
            imagePointer=NULL;
            _howMany--;
        }
        else
            i++;
    }
    updateList();
}

void MassMain::reset()
{
    for(int i=0;i<listOfElements->count();i++)
    {
        if(listOfElements->at(i)->status == tr("ukończony"))
            listOfElements->at(i)->status = tr("czeka");
    }
    updateList();
}

void MassMain::keyPressEvent(QKeyEvent *k)
{
    if(k->key() == Qt::Key_Delete)oneRemove();
}

void MassMain::oneRemove()
{
    QListWidgetItem *_item;
    for(int i=0;i<ui->listWidget->count();i++)
    {
        _item = ui->listWidget->item(i);
        if(_item->isSelected())
        {
            ui->listWidget->removeItemWidget(_item);
            MPImage *polo = listOfElements->at(i);
            listOfElements->removeAt(i);
            polo->disconnect();
            free(polo);
            updateList();
            return;
        }
    }
}
//########################################################################## Thread Actions

void MassMain::go()
{
    for(int i=0;i<listOfElements->count();i++)
    {
        if(listOfElements->at(i)->status == tr("czeka"))
            listOfElements->at(i)->settings(format,quality,ui->WidthField->text(),ui->HeightField->text(),ui->prefixField->text());
    }
    updateList();
}

void MassMain::stopThem()
{

    for(int i=0;i<listOfElements->count();i++)
    {
        if(listOfElements->at(i)->status == tr("odpalony"))
            listOfElements->at(i)->killSignal();
    }
    updateList();
}

void MassMain::one(QListWidgetItem* item)
{
    int _row = item->listWidget()->row(item);
    QString _status = listOfElements->at(_row)->status;
    if(_status == tr("czeka"))
        listOfElements->at(_row)->settings(format,quality,ui->WidthField->text(),ui->HeightField->text(),ui->prefixField->text());
    if(_status == tr("odpalony"))
        listOfElements->at(_row)->killSignal();
}
//########################################################################## Menu Actions
void MassMain::changeFormat()
{
    ui->menuFormat->setActiveAction((QAction*)QObject::sender());
    format=ui->menuFormat->activeAction()->text();
    changeQuality(quality);
}

void MassMain::changeQuality(int dec)
{
    QString _qualityCheck;
    quality=dec;
    if(quality < 0)_qualityCheck = "auto";
    else
        _qualityCheck = toString(quality);
    ui->settingsTextField->setText(tr("Przetwarzam na format: ") + format + "\t" + tr("Jakość: ") + _qualityCheck);
}

void MassMain::loadDir()
{
    QString _name = QFileDialog::getExistingDirectory(this,tr("Wybierz Katalog"),"");
    QDir _dir(_name);
    QStringList _list;
    QStringList _filter(QStringList()<< "*.bmp"<< "*.bw"<< "*.dds"<< "*.eps"<< "*.epsf"<< "*.epsi"<< "*.exr"<< "*.gif"<< "*.ico"<< "*.jp2"<< "*.jpeg"<< "*.jpg"<< "*.mng"<< "*.pbm"<< "*.pcx"<< "*.pgm"<< "*.pic"<< "*.png"<< "*.ppm"<< "*.psd"<< "*.ras"<< "*.rgb"<< "*.rgba"<< "*.sgi"<< "*.svg"<< "*.svgz"<< "*.tga"<< "*.tif"<< "*.tiff"<< "*.xbm"<< "*.xcf"<< "*.xpm"<< "*.xv");
    _list = _dir.entryList(_filter);
    for(int i=0;i<_list.count();i++)
    {
        if(_list.at(i) != "")
        {
            addToList(_name+"/"+_list.at(i));
        }
    }
    updateList();
}

void MassMain::loadFile()
{
    QString _name = QFileDialog::getOpenFileName(this,tr("Wybierz Plik"),"",tr("Obrazek")+" (*.bmp *.bw *.dds *.eps *.epsf *.epsi *.exr *.gif *.ico *.jp2 *.jpeg *.jpg *.mng *.pbm *.pcx *.pgm *.pic *.png *.ppm *.psd *.ras *.rgb *.rgba *.sgi *.svg *.svgz *.tga *.tif *.tiff *.xbm *.xcf *.xpm *.xv)");
    if(_name != "")
    {
        addToList(_name);
    }
    updateList();
}

void MassMain::aboutQt()
{
    QMessageBox::aboutQt(this,tr("O Qt..."));
}

void MassMain::about()
{
    QMessageBox::about(this,tr("O programie..."),tr("MASSPIXEL v 1.0") + "\n" + tr("Jest to program do masowej konwersji plików graficznych na inny obsługiwany format możliwie w jak najkrótszym czasie, zawiera również kilka dodatkowych ustawień.") + "\n\n" + tr("Autorem programu jest:") + "\nWojciech Janeczek\nwojciech.janeczek@gmail.com");
}

void MassMain::settings()
{
    if(ui->Options->isHidden())
        ui->Options->show();
    else
        ui->Options->hide();
}
