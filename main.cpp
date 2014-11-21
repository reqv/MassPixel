#include <QtGui/QApplication>
#include "massmain.h"

int main(int argc, char *argv[])
{
    QTranslator tlumacz;
    tlumacz.load(QString("lang/")+QLocale::system().name());
    QApplication a(argc, argv);
    a.installTranslator(&tlumacz);
    MassMain w;
    w.show();
    return a.exec();
}
