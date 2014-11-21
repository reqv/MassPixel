#ifndef CORE_H
#define CORE_H

#include <QTextCodec>
#include <QDebug>
#include <QImage>
#include <QImageReader>
#include <QImageWriter>
#include <QtConcurrentRun>
#include <QFile>
#include <QFileDialog>
#include <QDir>
#include <QMessageBox>
#include <sstream>
#include <QTranslator>
#include <QLocale>

QString tostring(int liczba);

class Obraz : public QObject
{
    Q_OBJECT

private:
    bool scale;
    int wysokosc,szerokosc;
    int progress = 0;
    QString format;
    int jakosc;
    QString output;
    QImage *wsk;

public:
    void process();
    QFuture<void> watek;
    Obraz(QString gdzie);
    void ustaw(QString f, int j,QString szer="",QString wys="", QString przed = "out_");
    QString sciezka;
    QString status;
    ~Obraz();

signals:
    void done();
    void sprawdz();

public slots:
    void ok();
    void error();
    void killsignal();
};

#endif // CORE_H
