#ifndef MASSMAIN_H
#define MASSMAIN_H

#include <QMainWindow>
#include <QDrag>
#include <QDropEvent>
#include <QDragEnterEvent>
#include <QListWidgetItem>
#include <QDropEvent>
#include <QMimeData>
#include "core.h"

namespace Ui {
class MassMain;
}

class MassMain : public QMainWindow
{
    Q_OBJECT
    
public:
    void keyPressEvent(QKeyEvent *k);
    void Dodajnaliste(QString gdzie);
    explicit MassMain(QWidget *parent = 0);
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);
    QList <Obraz*> *lista_elementow;
    Obraz *obraz_wsk;
    ~MassMain();
    
private:

    QTranslator trans;
    int jakosc=-1;
    QString format;
    Ui::MassMain *ui;

public slots:
    void reset();
    void zmienjakosc(int ile);
    void stopthem();
    void ZmienFormat();
    void aktualizujliste();
    void load_file();
    void load_dir();
    void czyscliste();
    void go();
    void ustawienia();
    void one(QListWidgetItem* item);
    void one_r();
    void oqt();
    void oprogramie();
};

#endif // MASSMAIN_H
