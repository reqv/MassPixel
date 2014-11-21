#include "massmain.h"
#include "ui_massmain.h"
//########################################################################## Konstruktor/Destruktor
MassMain::MassMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MassMain)
{
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf-8"));
    format="PNG";
    ui->setupUi(this);
    setAcceptDrops(true);
    ui->Usta->hide();
    setWindowIcon(QIcon(":/IMG/ico"));
    ui->jakosc_bar->setRange(-1,100);
    ui->corobie->setText(tr("Przetwarzam na format: ") + format + "\t" + tr("Jakość: auto"));
    lista_elementow = new QList <Obraz*>;
    aktualizujliste();
}

MassMain::~MassMain()
{
    delete ui;
}

//########################################################################## Drag & Drop

void MassMain::dragEnterEvent(QDragEnterEvent *event)   //rozpoznanie elementu przenoszonego
{
     if (event->mimeData()->hasFormat("text/plain"))
         event->acceptProposedAction();
}

void MassMain::dropEvent(QDropEvent *event)
{
    QByteArray imageFormat; //sprawdza czy obrazek
    QString nazwa = event->mimeData()->text();
    nazwa=nazwa.remove("file://");
    QStringList list = nazwa.split("\r\n",QString::SkipEmptyParts);
    for(int i=0;i<list.count();i++)
    {
        imageFormat = QImageReader::imageFormat(list.at(i));
        if(imageFormat != "")
        {
            Dodajnaliste(list.at(i));
            event->acceptProposedAction();
            aktualizujliste();
        }
    }
}
//########################################################################## Lista
void MassMain::Dodajnaliste(QString gdzie)
{
    obraz_wsk = new Obraz(gdzie);
    connect(obraz_wsk,SIGNAL(done()),this,SLOT(aktualizujliste()));
    lista_elementow->append(obraz_wsk);
    obraz_wsk = NULL;
}

void MassMain::aktualizujliste()
{
    ui->listWidget->clear();
    QString name;
    for(int i=0;i<lista_elementow->count();i++)
    {
        name = lista_elementow->at(i)->sciezka +" - "+lista_elementow->at(i)->status;
        ui->listWidget->addItem(name);
    }
}
void MassMain::czyscliste()
{
    int ile = lista_elementow->count();
    int i=0;
    while(i < ile)
    {
        obraz_wsk = lista_elementow->at(i);
        if((obraz_wsk->status == tr("ukończony")) or (obraz_wsk->status == tr("czeka")))
        {
            lista_elementow->removeAt(i);
            obraz_wsk->disconnect();
            free(obraz_wsk);
            obraz_wsk=NULL;
            ile--;
        }
        else
            i++;
    }
    aktualizujliste();
}
//########################################################################## Klawisze

void MassMain::go()
{
    for(int i=0;i<lista_elementow->count();i++)
    {
        if(lista_elementow->at(i)->status == tr("czeka"))
            lista_elementow->at(i)->ustaw(format,jakosc,ui->Szerokosc->text(),ui->Wysokosc->text(),ui->przedrostek->text());
    }
    aktualizujliste();
}

void MassMain::stopthem()
{

    for(int i=0;i<lista_elementow->count();i++)
    {
        if(lista_elementow->at(i)->status == tr("odpalony"))
            lista_elementow->at(i)->killsignal();
    }
    aktualizujliste();
}


void MassMain::reset()
{
    for(int i=0;i<lista_elementow->count();i++)
    {
        if(lista_elementow->at(i)->status == tr("ukończony"))
            lista_elementow->at(i)->status = tr("czeka");
    }
    aktualizujliste();
}

void MassMain::one(QListWidgetItem* item)
{
    int row = item->listWidget()->row(item);
    QString status = lista_elementow->at(row)->status;
    if(status == tr("czeka"))
        lista_elementow->at(row)->ustaw(format,jakosc,ui->Szerokosc->text(),ui->Wysokosc->text(),ui->przedrostek->text());
    if(status == tr("odpalony"))
        lista_elementow->at(row)->killsignal();
}
//########################################################################## Akcje z menu
void MassMain::ZmienFormat()
{
    QString codojakosci;
    ui->menuFormat->setActiveAction((QAction*)QObject::sender());
    format=ui->menuFormat->activeAction()->text();
    if(jakosc < 0)codojakosci = "auto";
    else
        codojakosci = tostring(jakosc);
    ui->corobie->setText(tr("Przetwarzam na format: ") + format + "\t" + tr("Jakość: ") + codojakosci);
}

void MassMain::zmienjakosc(int ile)
{
    QString codojakosci;
    jakosc=ile;
    if(jakosc < 0)codojakosci = "auto";
    else
        codojakosci = tostring(jakosc);
    ui->corobie->setText(tr("Przetwarzam na format: ") + format + "\t" + tr("Jakość: ") + codojakosci);
}

void MassMain::load_dir()
{
    QString nazwa = QFileDialog::getExistingDirectory(this,tr("Wybierz Katalog"),"");
    QDir direk(nazwa);
    QStringList list;
    QStringList filtr(QStringList()<< "*.bmp"<< "*.bw"<< "*.dds"<< "*.eps"<< "*.epsf"<< "*.epsi"<< "*.exr"<< "*.gif"<< "*.ico"<< "*.jp2"<< "*.jpeg"<< "*.jpg"<< "*.mng"<< "*.pbm"<< "*.pcx"<< "*.pgm"<< "*.pic"<< "*.png"<< "*.ppm"<< "*.psd"<< "*.ras"<< "*.rgb"<< "*.rgba"<< "*.sgi"<< "*.svg"<< "*.svgz"<< "*.tga"<< "*.tif"<< "*.tiff"<< "*.xbm"<< "*.xcf"<< "*.xpm"<< "*.xv");
    list = direk.entryList(filtr);
    for(int i=0;i<list.count();i++)
    {
        if(list.at(i) != "")
        {
            Dodajnaliste(nazwa+"/"+list.at(i));
        }
    }
    aktualizujliste();
}

void MassMain::load_file()
{
    QString nazwa = QFileDialog::getOpenFileName(this,tr("Wybierz Plik"),"",tr("Obrazek")+" (*.bmp *.bw *.dds *.eps *.epsf *.epsi *.exr *.gif *.ico *.jp2 *.jpeg *.jpg *.mng *.pbm *.pcx *.pgm *.pic *.png *.ppm *.psd *.ras *.rgb *.rgba *.sgi *.svg *.svgz *.tga *.tif *.tiff *.xbm *.xcf *.xpm *.xv)");
    if(nazwa != "")
    {
        Dodajnaliste(nazwa);
    }
    aktualizujliste();
}

void MassMain::oqt()
{
    QMessageBox::aboutQt(this,tr("O Qt..."));
}

void MassMain::oprogramie()
{
    QMessageBox::about(this,tr("O programie..."),tr("MASSPIXEL v 1.0 beta") + "\n" + tr("Jest to program do masowej konwersji plików graficznych na inny obsługiwany format możliwie w jak najkrótszym czasie, zawiera również kilka dodatkowych ustawień.") + "\n\n" + tr("Autorem programu jest:") + "\nWojciech Janeczek\npapajow@gmail.com");
}

void MassMain::ustawienia()
{
    if(ui->Usta->isHidden())
        ui->Usta->show();
    else
        ui->Usta->hide();
}

//########################################################################## Klawiatura
void MassMain::keyPressEvent(QKeyEvent *k)
{
    if(k->key() == Qt::Key_Delete)one_r();
}

void MassMain::one_r()
{
    QListWidgetItem *item;
    for(int i=0;i<ui->listWidget->count();i++)
    {
        item = ui->listWidget->item(i);
        if(item->isSelected())
        {
            ui->listWidget->removeItemWidget(item);
            Obraz *polo = lista_elementow->at(i);
            lista_elementow->removeAt(i);
            polo->disconnect();
            free(polo);
            aktualizujliste();
            return;
        }
    }
}
