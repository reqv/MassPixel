/********************************************************************************
** Form generated from reading UI file 'ustawka.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USTAWKA_H
#define UI_USTAWKA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ustawka
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *Anuluj;

    void setupUi(QWidget *Ustawka)
    {
        if (Ustawka->objectName().isEmpty())
            Ustawka->setObjectName(QString::fromUtf8("Ustawka"));
        Ustawka->resize(400, 600);
        Ustawka->setMinimumSize(QSize(400, 600));
        Ustawka->setMaximumSize(QSize(400, 600));
        verticalLayoutWidget = new QWidget(Ustawka);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 581));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 150));
        formLayoutWidget_2 = new QWidget(groupBox);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(19, 29, 171, 121));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formLayoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_2);

        checkBox = new QCheckBox(formLayoutWidget_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, checkBox);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 150));
        formLayoutWidget_3 = new QWidget(groupBox_2);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(20, 30, 261, 51));
        formLayout_4 = new QFormLayout(formLayoutWidget_3);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(formLayoutWidget_3);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_5);

        groupBox->raise();
        groupBox->raise();
        formLayoutWidget_3->raise();

        verticalLayout->addWidget(groupBox_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);

        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        Anuluj = new QPushButton(verticalLayoutWidget);
        Anuluj->setObjectName(QString::fromUtf8("Anuluj"));

        verticalLayout->addWidget(Anuluj);


        retranslateUi(Ustawka);
        QObject::connect(Anuluj, SIGNAL(clicked()), Ustawka, SLOT(close()));

        QMetaObject::connectSlotsByName(Ustawka);
    } // setupUi

    void retranslateUi(QWidget *Ustawka)
    {
        Ustawka->setWindowTitle(QApplication::translate("Ustawka", "Ustawienia", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Ustawka", "Obrazek", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Ustawka", "Wysoko\305\233\304\207", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Ustawka", "Szeroko\305\233\304\207", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Ustawka", "Auto", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Ustawka", "Output", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Ustawka", "Przedrostek", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Ustawka", "Zapisz", 0, QApplication::UnicodeUTF8));
        Anuluj->setText(QApplication::translate("Ustawka", "Anuluj", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ustawka: public Ui_Ustawka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USTAWKA_H
