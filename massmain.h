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
    void addToList(QString where);
    explicit MassMain(QWidget *parent = 0);
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);
    QList <MPImage*> *listOfElements;
    MPImage *imagePointer;
    ~MassMain();
    
private:

    QTranslator trans;
    int quality=-1;
    QString format;
    Ui::MassMain *ui;

public slots:
    void reset();
    void changeQuality(int dec);
    void stopThem();
    void changeFormat();
    void updateList();
    void loadFile();
    void loadDir();
    void clearList();
    void go();
    void settings();
    void one(QListWidgetItem* item);
    void oneRemove();
    void aboutQt();
    void about();
};

#endif // MASSMAIN_H
