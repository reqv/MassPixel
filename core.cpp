#include "core.h"

MPImage::MPImage(QString where)
{
    this->path = where;
    this->status = tr("czeka");
}

MPImage::~MPImage()
{
    this->path = "";
    this->status = "";
}

void MPImage::settings(QString format,int quality, QString width, QString height, QString prefix)
{
    QDir* dir = new QDir("output");
    if(!dir->exists())
        dir->mkdir(".");
    this->status = tr("ładuję...");
    QFileInfo find(path);
    this->format = format;
    this->quality = quality;
    this->output = dir->absolutePath()+"/"+prefix+find.baseName();
    this->width = width.toInt();
    this->height = height.toInt();
    if((this->width != 0) or (this->height != 0))
    {
        scale = true;
    }
    else
        scale = false;
    this->thread = QtConcurrent::run(this,&MPImage::process);
    this->status= tr("odpalony");
}
//#################################################################### Thread
void MPImage::process()
{
    int _i=0;
    QString _ok=output;
    while(QFileInfo(_ok+"."+format.toLower()).exists())
    {
        _ok = output + toString(_i) + "." + format;
        _i++;
    }
    connect(this,SIGNAL(check()),this,SLOT(ok()));
    if(progress < 1)
    {
        if(status == tr("czeka")) return;
        pointer = new QImage(path);
        progress = 1;
    }
    if(status == tr("czeka")) return;
    if(scale)
    {
        if(width == 0) width = pointer->height();
        if(height == 0) height = pointer->width();
        *pointer = pointer->scaled(width,height,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    }
    if(status == tr("czeka")) return;
    pointer->save(_ok+"."+format.toLower(),format.toStdString().c_str(),quality);
    free(pointer);
    progress=0;
    pointer=NULL;
    emit check();
}
//#################################################################### Signals and Slots
void MPImage::ok()
{
    status=tr("ukończony");
    emit done();
}

void MPImage::error()
{
    status=tr("błąd");
    emit done();
}

void MPImage::killSignal()
{
    status = tr("czeka");
}
//#################################################################### Others
QString toString(int dec)
{
    std::ostringstream ss;
    ss << dec;
    QString string;
    return string.fromStdString(ss.str());
}
