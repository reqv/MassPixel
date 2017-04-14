#include <QApplication>
#include "massmain.h"

int main(int argc, char *argv[])
{
    QTranslator _translator;
    _translator.load(QString("lang/")+QLocale::system().name());
    QApplication _app(argc, argv);
    _app.installTranslator(&_translator);
    MassMain _window;
    _window.setAcceptDrops(true);
    _window.show();
    return _app.exec();
}
