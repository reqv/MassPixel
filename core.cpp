#include "core.h"
#include <iostream>

Obraz::Obraz(QString gdzie)
{
    sciezka = gdzie;
    status = tr("czeka");
}

Obraz::~Obraz()
{
    sciezka = "";
    status = "";
}

void Obraz::ustaw(QString f,int j, QString szer, QString wys, QString przed)
{
    QDir* dir = new QDir("output");
    if(!dir->exists())
        dir->mkdir(".");
    status = tr("ładuję...");
    QFileInfo find(sciezka);
    format = f;
    jakosc = j;
    output = dir->absolutePath()+"/"+przed+find.baseName();
    std::cout<<output.toStdString()<<endl;
    szerokosc = szer.toInt();
    wysokosc = wys.toInt();
    if((szerokosc != 0) or (wysokosc != 0))
    {
        scale = true;
    }
    else
        scale = false;
    watek = QtConcurrent::run(this,&Obraz::process);
    status= tr("odpalony");
}
//#################################################################### Watek
void Obraz::process()
{
    int i=0;
    QString ok=output;
    while(QFileInfo(ok+"."+format.toLower()).exists())
    {
        ok = output + tostring(i) + "." + format;
        i++;
    }
    connect(this,SIGNAL(sprawdz()),this,SLOT(ok()));
    if(progress < 1)
    {
        if(status == tr("czeka")) return;
        wsk = new QImage(sciezka);
        progress = 1;
    }
    if(status == tr("czeka")) return;
    if(scale)
    {
        if(szerokosc == 0) szerokosc = wsk->height();
        if(wysokosc == 0) wysokosc = wsk->width();
        *wsk = wsk->scaled(szerokosc,wysokosc,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    }
    if(status == tr("czeka")) return;
    wsk->save(ok+"."+format.toLower(),format.toStdString().c_str(),jakosc);
    free(wsk);
    progress=0;
    wsk=NULL;
    emit sprawdz();
}
//#################################################################### Sygnaly i Sloty
void Obraz::ok()
{
    status=tr("ukończony");
    emit done();
}

void Obraz::error()
{
    status=tr("błąd");
    emit done();
}

void Obraz::killsignal()
{
    status = tr("czeka");
}
//#################################################################### Inne
QString tostring(int liczba)
{
    std::ostringstream ss;
    ss << liczba;
    QString napis;
    return napis.fromStdString(ss.str());
}
