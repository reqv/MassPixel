/********************************************************************************
** Form generated from reading UI file 'massmain.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASSMAIN_H
#define UI_MASSMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MassMain
{
public:
    QAction *actionLoadDir;
    QAction *actionZamknij;
    QAction *actionJPEG;
    QAction *actionPNG;
    QAction *actionBMP;
    QAction *actionAboutQt;
    QAction *actionAbout;
    QAction *actionAutor;
    QAction *actionClear;
    QAction *actionICO;
    QAction *actionLoadFile;
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
    QAction *actionReset;
    QWidget *MASS;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *startButton;
    QPushButton *stopButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *settingsTextField;
    QPushButton *optionsButton;
    QFrame *line;
    QWidget *Options;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *OptionsGrid;
    QLabel *prefixLabel;
    QLineEdit *prefixField;
    QLabel *QualityLabel;
    QSlider *QualityBar;
    QLabel *WidthLabel;
    QLineEdit *WidthField;
    QLabel *HeightLabel;
    QLineEdit *HeightField;
    QListWidget *listWidget;
    QMenuBar *menu;
    QMenu *menuFiles;
    QMenu *menuFormat;
    QMenu *menuInfo;

    void setupUi(QMainWindow *MassMain)
    {
        if (MassMain->objectName().isEmpty())
            MassMain->setObjectName(QStringLiteral("MassMain"));
        MassMain->resize(1024, 823);
        MassMain->setMinimumSize(QSize(1024, 823));
        MassMain->setMaximumSize(QSize(1024, 823));
        MassMain->setAcceptDrops(false);
        actionLoadDir = new QAction(MassMain);
        actionLoadDir->setObjectName(QStringLiteral("actionLoadDir"));
        actionZamknij = new QAction(MassMain);
        actionZamknij->setObjectName(QStringLiteral("actionZamknij"));
        actionJPEG = new QAction(MassMain);
        actionJPEG->setObjectName(QStringLiteral("actionJPEG"));
        actionJPEG->setCheckable(false);
        actionJPEG->setChecked(false);
        actionJPEG->setAutoRepeat(true);
        actionPNG = new QAction(MassMain);
        actionPNG->setObjectName(QStringLiteral("actionPNG"));
        actionPNG->setCheckable(false);
        actionBMP = new QAction(MassMain);
        actionBMP->setObjectName(QStringLiteral("actionBMP"));
        actionBMP->setCheckable(false);
        actionAboutQt = new QAction(MassMain);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionAbout = new QAction(MassMain);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAutor = new QAction(MassMain);
        actionAutor->setObjectName(QStringLiteral("actionAutor"));
        actionClear = new QAction(MassMain);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionICO = new QAction(MassMain);
        actionICO->setObjectName(QStringLiteral("actionICO"));
        actionLoadFile = new QAction(MassMain);
        actionLoadFile->setObjectName(QStringLiteral("actionLoadFile"));
        actionJPG = new QAction(MassMain);
        actionJPG->setObjectName(QStringLiteral("actionJPG"));
        actionBW = new QAction(MassMain);
        actionBW->setObjectName(QStringLiteral("actionBW"));
        actionEPS = new QAction(MassMain);
        actionEPS->setObjectName(QStringLiteral("actionEPS"));
        actionEPSF = new QAction(MassMain);
        actionEPSF->setObjectName(QStringLiteral("actionEPSF"));
        actionRGB = new QAction(MassMain);
        actionRGB->setObjectName(QStringLiteral("actionRGB"));
        actionRGBA = new QAction(MassMain);
        actionRGBA->setObjectName(QStringLiteral("actionRGBA"));
        actionTGA = new QAction(MassMain);
        actionTGA->setObjectName(QStringLiteral("actionTGA"));
        actionPIC = new QAction(MassMain);
        actionPIC->setObjectName(QStringLiteral("actionPIC"));
        actionJP2 = new QAction(MassMain);
        actionJP2->setObjectName(QStringLiteral("actionJP2"));
        actionPCX = new QAction(MassMain);
        actionPCX->setObjectName(QStringLiteral("actionPCX"));
        actionPPM = new QAction(MassMain);
        actionPPM->setObjectName(QStringLiteral("actionPPM"));
        actionTif = new QAction(MassMain);
        actionTif->setObjectName(QStringLiteral("actionTif"));
        actionTIIFF = new QAction(MassMain);
        actionTIIFF->setObjectName(QStringLiteral("actionTIIFF"));
        actionEPSI = new QAction(MassMain);
        actionEPSI->setObjectName(QStringLiteral("actionEPSI"));
        actionPrzedrostek = new QAction(MassMain);
        actionPrzedrostek->setObjectName(QStringLiteral("actionPrzedrostek"));
        actionReset = new QAction(MassMain);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        MASS = new QWidget(MassMain);
        MASS->setObjectName(QStringLiteral("MASS"));
        MASS->setMinimumSize(QSize(1024, 768));
        MASS->setMaximumSize(QSize(1024, 768));
        MASS->setAcceptDrops(false);
        verticalLayoutWidget = new QWidget(MASS);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 1001, 771));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        startButton = new QPushButton(verticalLayoutWidget);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout->addWidget(startButton);

        stopButton = new QPushButton(verticalLayoutWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        horizontalLayout->addWidget(stopButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        settingsTextField = new QLineEdit(verticalLayoutWidget);
        settingsTextField->setObjectName(QStringLiteral("settingsTextField"));
        settingsTextField->setReadOnly(true);

        horizontalLayout->addWidget(settingsTextField);

        optionsButton = new QPushButton(verticalLayoutWidget);
        optionsButton->setObjectName(QStringLiteral("optionsButton"));

        horizontalLayout->addWidget(optionsButton);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        Options = new QWidget(verticalLayoutWidget);
        Options->setObjectName(QStringLiteral("Options"));
        Options->setMinimumSize(QSize(0, 35));
        horizontalLayoutWidget = new QWidget(Options);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 999, 33));
        OptionsGrid = new QHBoxLayout(horizontalLayoutWidget);
        OptionsGrid->setSpacing(6);
        OptionsGrid->setContentsMargins(11, 11, 11, 11);
        OptionsGrid->setObjectName(QStringLiteral("OptionsGrid"));
        OptionsGrid->setContentsMargins(0, 0, 0, 0);
        prefixLabel = new QLabel(horizontalLayoutWidget);
        prefixLabel->setObjectName(QStringLiteral("prefixLabel"));

        OptionsGrid->addWidget(prefixLabel);

        prefixField = new QLineEdit(horizontalLayoutWidget);
        prefixField->setObjectName(QStringLiteral("prefixField"));
        prefixField->setMinimumSize(QSize(100, 0));
        prefixField->setMaximumSize(QSize(100, 16777215));

        OptionsGrid->addWidget(prefixField);

        QualityLabel = new QLabel(horizontalLayoutWidget);
        QualityLabel->setObjectName(QStringLiteral("QualityLabel"));

        OptionsGrid->addWidget(QualityLabel);

        QualityBar = new QSlider(horizontalLayoutWidget);
        QualityBar->setObjectName(QStringLiteral("QualityBar"));
        QualityBar->setOrientation(Qt::Horizontal);

        OptionsGrid->addWidget(QualityBar);

        WidthLabel = new QLabel(horizontalLayoutWidget);
        WidthLabel->setObjectName(QStringLiteral("WidthLabel"));

        OptionsGrid->addWidget(WidthLabel);

        WidthField = new QLineEdit(horizontalLayoutWidget);
        WidthField->setObjectName(QStringLiteral("WidthField"));
        WidthField->setMaximumSize(QSize(60, 16777215));

        OptionsGrid->addWidget(WidthField);

        HeightLabel = new QLabel(horizontalLayoutWidget);
        HeightLabel->setObjectName(QStringLiteral("HeightLabel"));

        OptionsGrid->addWidget(HeightLabel);

        HeightField = new QLineEdit(horizontalLayoutWidget);
        HeightField->setObjectName(QStringLiteral("HeightField"));
        HeightField->setMaximumSize(QSize(60, 16777215));

        OptionsGrid->addWidget(HeightField);


        verticalLayout->addWidget(Options);

        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setAcceptDrops(false);

        verticalLayout->addWidget(listWidget);

        MassMain->setCentralWidget(MASS);
        menu = new QMenuBar(MassMain);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setGeometry(QRect(0, 0, 1024, 21));
        menuFiles = new QMenu(menu);
        menuFiles->setObjectName(QStringLiteral("menuFiles"));
        menuFormat = new QMenu(menu);
        menuFormat->setObjectName(QStringLiteral("menuFormat"));
        menuFormat->setTearOffEnabled(false);
        menuInfo = new QMenu(menu);
        menuInfo->setObjectName(QStringLiteral("menuInfo"));
        MassMain->setMenuBar(menu);

        menu->addAction(menuFiles->menuAction());
        menu->addAction(menuFormat->menuAction());
        menu->addAction(menuInfo->menuAction());
        menuFiles->addAction(actionLoadFile);
        menuFiles->addAction(actionLoadDir);
        menuFiles->addSeparator();
        menuFiles->addAction(actionReset);
        menuFiles->addAction(actionClear);
        menuFiles->addSeparator();
        menuFiles->addAction(actionZamknij);
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
        menuInfo->addAction(actionAboutQt);
        menuInfo->addSeparator();
        menuInfo->addAction(actionAbout);

        retranslateUi(MassMain);
        QObject::connect(actionBMP, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(actionJPEG, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(actionPNG, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(actionClear, SIGNAL(triggered()), MassMain, SLOT(clearList()));
        QObject::connect(startButton, SIGNAL(clicked()), MassMain, SLOT(go()));
        QObject::connect(actionICO, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(actionLoadFile, SIGNAL(triggered()), MassMain, SLOT(loadFile()));
        QObject::connect(actionLoadDir, SIGNAL(triggered()), MassMain, SLOT(loadDir()));
        QObject::connect(actionZamknij, SIGNAL(triggered()), MassMain, SLOT(close()));
        QObject::connect(actionAboutQt, SIGNAL(triggered()), MassMain, SLOT(aboutQt()));
        QObject::connect(actionJPG, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(actionAbout, SIGNAL(triggered()), MassMain, SLOT(about()));
        QObject::connect(actionJP2, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(actionPIC, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(actionTIIFF, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(actionTif, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(actionRGB, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(actionRGBA, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(actionTGA, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(actionPCX, SIGNAL(triggered()), MassMain, SLOT(changeFormat()));
        QObject::connect(stopButton, SIGNAL(clicked()), MassMain, SLOT(stopThem()));
        QObject::connect(optionsButton, SIGNAL(clicked()), MassMain, SLOT(settings()));
        QObject::connect(QualityBar, SIGNAL(sliderMoved(int)), MassMain, SLOT(changeQuality(int)));
        QObject::connect(actionReset, SIGNAL(triggered()), MassMain, SLOT(reset()));
        QObject::connect(listWidget, SIGNAL(itemDoubleClicked(QListWidgetItem*)), MassMain, SLOT(one(QListWidgetItem*)));

        QMetaObject::connectSlotsByName(MassMain);
    } // setupUi

    void retranslateUi(QMainWindow *MassMain)
    {
        MassMain->setWindowTitle(QApplication::translate("MassMain", "MassMain", Q_NULLPTR));
        actionLoadDir->setText(QApplication::translate("MassMain", "Wczytaj Katalog", Q_NULLPTR));
        actionZamknij->setText(QApplication::translate("MassMain", "Zamknij", Q_NULLPTR));
        actionJPEG->setText(QApplication::translate("MassMain", "JPEG", Q_NULLPTR));
        actionPNG->setText(QApplication::translate("MassMain", "PNG", Q_NULLPTR));
        actionBMP->setText(QApplication::translate("MassMain", "BMP", Q_NULLPTR));
        actionAboutQt->setText(QApplication::translate("MassMain", "O Qt ...", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MassMain", "O programie...", Q_NULLPTR));
        actionAutor->setText(QApplication::translate("MassMain", "Autor", Q_NULLPTR));
        actionClear->setText(QApplication::translate("MassMain", "Czysc", Q_NULLPTR));
        actionICO->setText(QApplication::translate("MassMain", "ICO", Q_NULLPTR));
        actionLoadFile->setText(QApplication::translate("MassMain", "Wczytaj Plik", Q_NULLPTR));
        actionJPG->setText(QApplication::translate("MassMain", "JPG", Q_NULLPTR));
        actionBW->setText(QApplication::translate("MassMain", "BW", Q_NULLPTR));
        actionEPS->setText(QApplication::translate("MassMain", "EPS", Q_NULLPTR));
        actionEPSF->setText(QApplication::translate("MassMain", "EPSF", Q_NULLPTR));
        actionRGB->setText(QApplication::translate("MassMain", "RGB", Q_NULLPTR));
        actionRGBA->setText(QApplication::translate("MassMain", "RGBA", Q_NULLPTR));
        actionTGA->setText(QApplication::translate("MassMain", "TGA", Q_NULLPTR));
        actionPIC->setText(QApplication::translate("MassMain", "PIC", Q_NULLPTR));
        actionJP2->setText(QApplication::translate("MassMain", "JP2", Q_NULLPTR));
        actionPCX->setText(QApplication::translate("MassMain", "PCX", Q_NULLPTR));
        actionPPM->setText(QApplication::translate("MassMain", "PPM", Q_NULLPTR));
        actionTif->setText(QApplication::translate("MassMain", "TIF", Q_NULLPTR));
        actionTIIFF->setText(QApplication::translate("MassMain", "TIFF", Q_NULLPTR));
        actionEPSI->setText(QApplication::translate("MassMain", "EPSI", Q_NULLPTR));
        actionPrzedrostek->setText(QApplication::translate("MassMain", "Przedrostek", Q_NULLPTR));
        actionReset->setText(QApplication::translate("MassMain", "Resetuj", Q_NULLPTR));
        startButton->setText(QApplication::translate("MassMain", "Start", Q_NULLPTR));
        stopButton->setText(QApplication::translate("MassMain", "Stop", Q_NULLPTR));
        optionsButton->setText(QApplication::translate("MassMain", "Ustawienia", Q_NULLPTR));
        prefixLabel->setText(QApplication::translate("MassMain", "Przedrostek", Q_NULLPTR));
        prefixField->setText(QApplication::translate("MassMain", "out_", Q_NULLPTR));
        QualityLabel->setText(QApplication::translate("MassMain", "Jako\305\233\304\207:", Q_NULLPTR));
        WidthLabel->setText(QApplication::translate("MassMain", "Szeroko\305\233\304\207", Q_NULLPTR));
        WidthField->setInputMask(QString());
        HeightLabel->setText(QApplication::translate("MassMain", "Wysoko\305\233\304\207", Q_NULLPTR));
        menuFiles->setTitle(QApplication::translate("MassMain", "Pliki", Q_NULLPTR));
        menuFormat->setTitle(QApplication::translate("MassMain", "Format", Q_NULLPTR));
        menuInfo->setTitle(QApplication::translate("MassMain", "Info", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MassMain: public Ui_MassMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASSMAIN_H
