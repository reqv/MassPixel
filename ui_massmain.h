/********************************************************************************
** Form generated from reading UI file 'massmain.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASSMAIN_H
#define UI_MASSMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MassMain
{
public:
    QAction *actionWczytaj_Katalog;
    QAction *actionZamknij;
    QAction *actionJPEG;
    QAction *actionPNG;
    QAction *actionBMP;
    QAction *actionO_qt;
    QAction *actionO_programie;
    QAction *actionAutor;
    QAction *actionCzysc;
    QAction *actionICO;
    QAction *actionWczytaj_Plik;
    QAction *actionJPG;
    QAction *actionBW;
    QAction *actionEPS;
    QAction *actionEPSF;
    QAction *actionRGB;
    QAction *actionRGBA;
    QAction *actionTGA;
    QAction *actionPIC;
    QAction *actionJP2;
    QAction *actionPCX;
    QAction *actionPPM;
    QAction *actionTif;
    QAction *actionTIIFF;
    QAction *actionEPSI;
    QAction *actionPrzedrostek;
    QAction *actionResetuj;
    QWidget *MASS;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *startthem;
    QPushButton *stopthem;
    QSpacerItem *horizontalSpacer;
    QLineEdit *corobie;
    QPushButton *ustawienia;
    QFrame *line;
    QWidget *Usta;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *usta_bar;
    QLabel *przedrostek_label;
    QLineEdit *przedrostek;
    QLabel *jakosc_label;
    QSlider *jakosc_bar;
    QLabel *Szerokosc_label;
    QLineEdit *Szerokosc;
    QLabel *Wysokosc_label;
    QLineEdit *Wysokosc;
    QListWidget *listWidget;
    QMenuBar *menu;
    QMenu *menuPliki;
    QMenu *menuFormat;
    QMenu *menuInfo;

    void setupUi(QMainWindow *MassMain)
    {
        if (MassMain->objectName().isEmpty())
            MassMain->setObjectName(QString::fromUtf8("MassMain"));
        MassMain->resize(1024, 823);
        MassMain->setMinimumSize(QSize(1024, 823));
        MassMain->setMaximumSize(QSize(1024, 823));
        actionWczytaj_Katalog = new QAction(MassMain);
        actionWczytaj_Katalog->setObjectName(QString::fromUtf8("actionWczytaj_Katalog"));
        actionZamknij = new QAction(MassMain);
        actionZamknij->setObjectName(QString::fromUtf8("actionZamknij"));
        actionJPEG = new QAction(MassMain);
        actionJPEG->setObjectName(QString::fromUtf8("actionJPEG"));
        actionJPEG->setCheckable(false);
        actionJPEG->setChecked(false);
        actionJPEG->setAutoRepeat(true);
        actionPNG = new QAction(MassMain);
        actionPNG->setObjectName(QString::fromUtf8("actionPNG"));
        actionPNG->setCheckable(false);
        actionBMP = new QAction(MassMain);
        actionBMP->setObjectName(QString::fromUtf8("actionBMP"));
        actionBMP->setCheckable(false);
        actionO_qt = new QAction(MassMain);
        actionO_qt->setObjectName(QString::fromUtf8("actionO_qt"));
        actionO_programie = new QAction(MassMain);
        actionO_programie->setObjectName(QString::fromUtf8("actionO_programie"));
        actionAutor = new QAction(MassMain);
        actionAutor->setObjectName(QString::fromUtf8("actionAutor"));
        actionCzysc = new QAction(MassMain);
        actionCzysc->setObjectName(QString::fromUtf8("actionCzysc"));
        actionICO = new QAction(MassMain);
        actionICO->setObjectName(QString::fromUtf8("actionICO"));
        actionWczytaj_Plik = new QAction(MassMain);
        actionWczytaj_Plik->setObjectName(QString::fromUtf8("actionWczytaj_Plik"));
        actionJPG = new QAction(MassMain);
        actionJPG->setObjectName(QString::fromUtf8("actionJPG"));
        actionBW = new QAction(MassMain);
        actionBW->setObjectName(QString::fromUtf8("actionBW"));
        actionEPS = new QAction(MassMain);
        actionEPS->setObjectName(QString::fromUtf8("actionEPS"));
        actionEPSF = new QAction(MassMain);
        actionEPSF->setObjectName(QString::fromUtf8("actionEPSF"));
        actionRGB = new QAction(MassMain);
        actionRGB->setObjectName(QString::fromUtf8("actionRGB"));
        actionRGBA = new QAction(MassMain);
        actionRGBA->setObjectName(QString::fromUtf8("actionRGBA"));
        actionTGA = new QAction(MassMain);
        actionTGA->setObjectName(QString::fromUtf8("actionTGA"));
        actionPIC = new QAction(MassMain);
        actionPIC->setObjectName(QString::fromUtf8("actionPIC"));
        actionJP2 = new QAction(MassMain);
        actionJP2->setObjectName(QString::fromUtf8("actionJP2"));
        actionPCX = new QAction(MassMain);
        actionPCX->setObjectName(QString::fromUtf8("actionPCX"));
        actionPPM = new QAction(MassMain);
        actionPPM->setObjectName(QString::fromUtf8("actionPPM"));
        actionTif = new QAction(MassMain);
        actionTif->setObjectName(QString::fromUtf8("actionTif"));
        actionTIIFF = new QAction(MassMain);
        actionTIIFF->setObjectName(QString::fromUtf8("actionTIIFF"));
        actionEPSI = new QAction(MassMain);
        actionEPSI->setObjectName(QString::fromUtf8("actionEPSI"));
        actionPrzedrostek = new QAction(MassMain);
        actionPrzedrostek->setObjectName(QString::fromUtf8("actionPrzedrostek"));
        actionResetuj = new QAction(MassMain);
        actionResetuj->setObjectName(QString::fromUtf8("actionResetuj"));
        MASS = new QWidget(MassMain);
        MASS->setObjectName(QString::fromUtf8("MASS"));
        MASS->setMinimumSize(QSize(1024, 768));
        MASS->setMaximumSize(QSize(1024, 768));
        verticalLayoutWidget = new QWidget(MASS);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 1001, 771));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startthem = new QPushButton(verticalLayoutWidget);
        startthem->setObjectName(QString::fromUtf8("startthem"));

        horizontalLayout->addWidget(startthem);

        stopthem = new QPushButton(verticalLayoutWidget);
        stopthem->setObjectName(QString::fromUtf8("stopthem"));

        horizontalLayout->addWidget(stopthem);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        corobie = new QLineEdit(verticalLayoutWidget);
        corobie->setObjectName(QString::fromUtf8("corobie"));
        corobie->setReadOnly(true);

        horizontalLayout->addWidget(corobie);

        ustawienia = new QPushButton(verticalLayoutWidget);
        ustawienia->setObjectName(QString::fromUtf8("ustawienia"));

        horizontalLayout->addWidget(ustawienia);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        Usta = new QWidget(verticalLayoutWidget);
        Usta->setObjectName(QString::fromUtf8("Usta"));
        Usta->setMinimumSize(QSize(0, 35));
        horizontalLayoutWidget = new QWidget(Usta);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 999, 33));
        usta_bar = new QHBoxLayout(horizontalLayoutWidget);
        usta_bar->setSpacing(6);
        usta_bar->setContentsMargins(11, 11, 11, 11);
        usta_bar->setObjectName(QString::fromUtf8("usta_bar"));
        usta_bar->setContentsMargins(0, 0, 0, 0);
        przedrostek_label = new QLabel(horizontalLayoutWidget);
        przedrostek_label->setObjectName(QString::fromUtf8("przedrostek_label"));

        usta_bar->addWidget(przedrostek_label);

        przedrostek = new QLineEdit(horizontalLayoutWidget);
        przedrostek->setObjectName(QString::fromUtf8("przedrostek"));
        przedrostek->setMinimumSize(QSize(100, 0));
        przedrostek->setMaximumSize(QSize(100, 16777215));

        usta_bar->addWidget(przedrostek);

        jakosc_label = new QLabel(horizontalLayoutWidget);
        jakosc_label->setObjectName(QString::fromUtf8("jakosc_label"));

        usta_bar->addWidget(jakosc_label);

        jakosc_bar = new QSlider(horizontalLayoutWidget);
        jakosc_bar->setObjectName(QString::fromUtf8("jakosc_bar"));
        jakosc_bar->setOrientation(Qt::Horizontal);

        usta_bar->addWidget(jakosc_bar);

        Szerokosc_label = new QLabel(horizontalLayoutWidget);
        Szerokosc_label->setObjectName(QString::fromUtf8("Szerokosc_label"));

        usta_bar->addWidget(Szerokosc_label);

        Szerokosc = new QLineEdit(horizontalLayoutWidget);
        Szerokosc->setObjectName(QString::fromUtf8("Szerokosc"));
        Szerokosc->setMaximumSize(QSize(60, 16777215));

        usta_bar->addWidget(Szerokosc);

        Wysokosc_label = new QLabel(horizontalLayoutWidget);
        Wysokosc_label->setObjectName(QString::fromUtf8("Wysokosc_label"));

        usta_bar->addWidget(Wysokosc_label);

        Wysokosc = new QLineEdit(horizontalLayoutWidget);
        Wysokosc->setObjectName(QString::fromUtf8("Wysokosc"));
        Wysokosc->setMaximumSize(QSize(60, 16777215));

        usta_bar->addWidget(Wysokosc);


        verticalLayout->addWidget(Usta);

        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        MassMain->setCentralWidget(MASS);
        menu = new QMenuBar(MassMain);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(0, 0, 1024, 29));
        menuPliki = new QMenu(menu);
        menuPliki->setObjectName(QString::fromUtf8("menuPliki"));
        menuFormat = new QMenu(menu);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        menuFormat->setTearOffEnabled(false);
        menuInfo = new QMenu(menu);
        menuInfo->setObjectName(QString::fromUtf8("menuInfo"));
        MassMain->setMenuBar(menu);

        menu->addAction(menuPliki->menuAction());
        menu->addAction(menuFormat->menuAction());
        menu->addAction(menuInfo->menuAction());
        menuPliki->addAction(actionWczytaj_Plik);
        menuPliki->addAction(actionWczytaj_Katalog);
        menuPliki->addSeparator();
        menuPliki->addAction(actionResetuj);
        menuPliki->addAction(actionCzysc);
        menuPliki->addSeparator();
        menuPliki->addAction(actionZamknij);
        menuFormat->addAction(actionBMP);
        menuFormat->addAction(actionJPG);
        menuFormat->addAction(actionJPEG);
        menuFormat->addAction(actionPNG);
        menuFormat->addAction(actionJP2);
        menuFormat->addSeparator();
        menuFormat->addAction(actionICO);
        menuFormat->addAction(actionPIC);
        menuFormat->addSeparator();
        menuFormat->addAction(actionRGB);
        menuFormat->addAction(actionRGBA);
        menuFormat->addSeparator();
        menuFormat->addAction(actionTif);
        menuFormat->addAction(actionTIIFF);
        menuFormat->addSeparator();
        menuFormat->addAction(actionTGA);
        menuFormat->addAction(actionPCX);
        menuInfo->addAction(actionO_qt);
        menuInfo->addSeparator();
        menuInfo->addAction(actionO_programie);

        retranslateUi(MassMain);
        QObject::connect(actionBMP, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(actionJPEG, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(actionPNG, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(actionCzysc, SIGNAL(activated()), MassMain, SLOT(czyscliste()));
        QObject::connect(startthem, SIGNAL(clicked()), MassMain, SLOT(go()));
        QObject::connect(actionICO, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(actionWczytaj_Plik, SIGNAL(activated()), MassMain, SLOT(load_file()));
        QObject::connect(actionWczytaj_Katalog, SIGNAL(activated()), MassMain, SLOT(load_dir()));
        QObject::connect(actionZamknij, SIGNAL(activated()), MassMain, SLOT(close()));
        QObject::connect(actionO_qt, SIGNAL(activated()), MassMain, SLOT(oqt()));
        QObject::connect(actionJPG, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(actionO_programie, SIGNAL(activated()), MassMain, SLOT(oprogramie()));
        QObject::connect(actionJP2, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(actionPIC, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(actionTIIFF, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(actionTif, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(actionRGB, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(actionRGBA, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(actionTGA, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(actionPCX, SIGNAL(activated()), MassMain, SLOT(ZmienFormat()));
        QObject::connect(stopthem, SIGNAL(clicked()), MassMain, SLOT(stopthem()));
        QObject::connect(ustawienia, SIGNAL(clicked()), MassMain, SLOT(ustawienia()));
        QObject::connect(jakosc_bar, SIGNAL(sliderMoved(int)), MassMain, SLOT(zmienjakosc(int)));
        QObject::connect(actionResetuj, SIGNAL(activated()), MassMain, SLOT(reset()));
        QObject::connect(listWidget, SIGNAL(itemDoubleClicked(QListWidgetItem*)), MassMain, SLOT(one(QListWidgetItem*)));

        QMetaObject::connectSlotsByName(MassMain);
    } // setupUi

    void retranslateUi(QMainWindow *MassMain)
    {
        MassMain->setWindowTitle(QApplication::translate("MassMain", "MassMain", 0, QApplication::UnicodeUTF8));
        actionWczytaj_Katalog->setText(QApplication::translate("MassMain", "Wczytaj Katalog", 0, QApplication::UnicodeUTF8));
        actionZamknij->setText(QApplication::translate("MassMain", "Zamknij", 0, QApplication::UnicodeUTF8));
        actionJPEG->setText(QApplication::translate("MassMain", "JPEG", 0, QApplication::UnicodeUTF8));
        actionPNG->setText(QApplication::translate("MassMain", "PNG", 0, QApplication::UnicodeUTF8));
        actionBMP->setText(QApplication::translate("MassMain", "BMP", 0, QApplication::UnicodeUTF8));
        actionO_qt->setText(QApplication::translate("MassMain", "O Qt ...", 0, QApplication::UnicodeUTF8));
        actionO_programie->setText(QApplication::translate("MassMain", "O programie...", 0, QApplication::UnicodeUTF8));
        actionAutor->setText(QApplication::translate("MassMain", "Autor", 0, QApplication::UnicodeUTF8));
        actionCzysc->setText(QApplication::translate("MassMain", "Czysc", 0, QApplication::UnicodeUTF8));
        actionICO->setText(QApplication::translate("MassMain", "ICO", 0, QApplication::UnicodeUTF8));
        actionWczytaj_Plik->setText(QApplication::translate("MassMain", "Wczytaj Plik", 0, QApplication::UnicodeUTF8));
        actionJPG->setText(QApplication::translate("MassMain", "JPG", 0, QApplication::UnicodeUTF8));
        actionBW->setText(QApplication::translate("MassMain", "BW", 0, QApplication::UnicodeUTF8));
        actionEPS->setText(QApplication::translate("MassMain", "EPS", 0, QApplication::UnicodeUTF8));
        actionEPSF->setText(QApplication::translate("MassMain", "EPSF", 0, QApplication::UnicodeUTF8));
        actionRGB->setText(QApplication::translate("MassMain", "RGB", 0, QApplication::UnicodeUTF8));
        actionRGBA->setText(QApplication::translate("MassMain", "RGBA", 0, QApplication::UnicodeUTF8));
        actionTGA->setText(QApplication::translate("MassMain", "TGA", 0, QApplication::UnicodeUTF8));
        actionPIC->setText(QApplication::translate("MassMain", "PIC", 0, QApplication::UnicodeUTF8));
        actionJP2->setText(QApplication::translate("MassMain", "JP2", 0, QApplication::UnicodeUTF8));
        actionPCX->setText(QApplication::translate("MassMain", "PCX", 0, QApplication::UnicodeUTF8));
        actionPPM->setText(QApplication::translate("MassMain", "PPM", 0, QApplication::UnicodeUTF8));
        actionTif->setText(QApplication::translate("MassMain", "TIF", 0, QApplication::UnicodeUTF8));
        actionTIIFF->setText(QApplication::translate("MassMain", "TIFF", 0, QApplication::UnicodeUTF8));
        actionEPSI->setText(QApplication::translate("MassMain", "EPSI", 0, QApplication::UnicodeUTF8));
        actionPrzedrostek->setText(QApplication::translate("MassMain", "Przedrostek", 0, QApplication::UnicodeUTF8));
        actionResetuj->setText(QApplication::translate("MassMain", "Resetuj", 0, QApplication::UnicodeUTF8));
        startthem->setText(QApplication::translate("MassMain", "Start", 0, QApplication::UnicodeUTF8));
        stopthem->setText(QApplication::translate("MassMain", "Stop", 0, QApplication::UnicodeUTF8));
        ustawienia->setText(QApplication::translate("MassMain", "Ustawienia", 0, QApplication::UnicodeUTF8));
        przedrostek_label->setText(QApplication::translate("MassMain", "Przedrostek", 0, QApplication::UnicodeUTF8));
        przedrostek->setText(QApplication::translate("MassMain", "out_", 0, QApplication::UnicodeUTF8));
        jakosc_label->setText(QApplication::translate("MassMain", "Jako\305\233\304\207:", 0, QApplication::UnicodeUTF8));
        Szerokosc_label->setText(QApplication::translate("MassMain", "Szeroko\305\233\304\207", 0, QApplication::UnicodeUTF8));
        Szerokosc->setInputMask(QString());
        Wysokosc_label->setText(QApplication::translate("MassMain", "Wysoko\305\233\304\207", 0, QApplication::UnicodeUTF8));
        menuPliki->setTitle(QApplication::translate("MassMain", "Pliki", 0, QApplication::UnicodeUTF8));
        menuFormat->setTitle(QApplication::translate("MassMain", "Format", 0, QApplication::UnicodeUTF8));
        menuInfo->setTitle(QApplication::translate("MassMain", "Info", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MassMain: public Ui_MassMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASSMAIN_H
