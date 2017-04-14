#ifndef CORE_H
#define CORE_H

#include <QTextCodec>
#include <QDebug>
#include <QImage>
#include <QImageReader>
#include <QImageWriter>
#include <QtConcurrent/QtConcurrentRun>
#include <QFile>
#include <QFileDialog>
#include <QDir>
#include <QMessageBox>
#include <sstream>
#include <QTranslator>
#include <QLocale>

QString toString(int dec);

class MPImage : public QObject
{
    Q_OBJECT

private:
    bool scale;
    int height,width;
    int progress = 0;
    QString format;
    int quality;
    QString output;
    QImage *pointer;

public:
    void process();
    QFuture<void> thread;
    MPImage(QString where);
    void settings(QString file, int quality,QString width="",QString height="", QString prefix = "out_");
    QString path;
    QString status;
    ~MPImage();

signals:
    void done();
    void check();

public slots:
    void ok();
    void error();
    void killSignal();
};

#endif // CORE_H
