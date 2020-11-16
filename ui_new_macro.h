/********************************************************************************
** Form generated from reading UI file 'new_macro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_MACRO_H
#define UI_NEW_MACRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_macro
{
public:
    QWidget *layoutWidget;
    QGridLayout *LYT_newMacroMain;
    QGroupBox *LYT_macro;
    QDateEdit *DATE_macroStart;
    QDateEdit *DATE_macroEnd;
    QLabel *LBL_macroStart;
    QLabel *LBL_macroend;
    QListWidget *LIST_macroList;
    QComboBox *COMBO_athlete;
    QGroupBox *GRP_meso;
    QDateEdit *DATE_mesoStart;
    QLabel *LBL_mesoStart;
    QComboBox *COMBO_mesoType;
    QLabel *LBL_mesoDuration;
    QSpinBox *SPIN_mesoDuration;
    QPlainTextEdit *TXT_mesoName;
    QLabel *LBL_mesoName;
    QPushButton *BTN_mesoAdd;
    QGroupBox *GRP_archer;
    QLabel *LBL_archerDiv;
    QLabel *LBL_archerCat;
    QLabel *LBL_archerPic;

    void setupUi(QDialog *new_macro)
    {
        if (new_macro->objectName().isEmpty())
            new_macro->setObjectName(QString::fromUtf8("new_macro"));
        new_macro->resize(1280, 800);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(new_macro->sizePolicy().hasHeightForWidth());
        new_macro->setSizePolicy(sizePolicy);
        new_macro->setMinimumSize(QSize(1280, 800));
        layoutWidget = new QWidget(new_macro);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 1261, 781));
        LYT_newMacroMain = new QGridLayout(layoutWidget);
        LYT_newMacroMain->setObjectName(QString::fromUtf8("LYT_newMacroMain"));
        LYT_newMacroMain->setContentsMargins(0, 0, 0, 0);
        LYT_macro = new QGroupBox(layoutWidget);
        LYT_macro->setObjectName(QString::fromUtf8("LYT_macro"));
        QFont font;
        font.setPointSize(12);
        LYT_macro->setFont(font);
        DATE_macroStart = new QDateEdit(LYT_macro);
        DATE_macroStart->setObjectName(QString::fromUtf8("DATE_macroStart"));
        DATE_macroStart->setGeometry(QRect(100, 90, 110, 22));
        DATE_macroEnd = new QDateEdit(LYT_macro);
        DATE_macroEnd->setObjectName(QString::fromUtf8("DATE_macroEnd"));
        DATE_macroEnd->setGeometry(QRect(240, 90, 110, 22));
        LBL_macroStart = new QLabel(LYT_macro);
        LBL_macroStart->setObjectName(QString::fromUtf8("LBL_macroStart"));
        LBL_macroStart->setGeometry(QRect(80, 70, 51, 20));
        LBL_macroend = new QLabel(LYT_macro);
        LBL_macroend->setObjectName(QString::fromUtf8("LBL_macroend"));
        LBL_macroend->setGeometry(QRect(220, 70, 51, 20));
        LIST_macroList = new QListWidget(LYT_macro);
        LIST_macroList->setObjectName(QString::fromUtf8("LIST_macroList"));
        LIST_macroList->setGeometry(QRect(20, 130, 351, 621));
        COMBO_athlete = new QComboBox(LYT_macro);
        COMBO_athlete->setObjectName(QString::fromUtf8("COMBO_athlete"));
        COMBO_athlete->setGeometry(QRect(10, 30, 121, 22));
        GRP_meso = new QGroupBox(LYT_macro);
        GRP_meso->setObjectName(QString::fromUtf8("GRP_meso"));
        GRP_meso->setGeometry(QRect(390, 130, 411, 161));
        DATE_mesoStart = new QDateEdit(GRP_meso);
        DATE_mesoStart->setObjectName(QString::fromUtf8("DATE_mesoStart"));
        DATE_mesoStart->setGeometry(QRect(50, 40, 110, 22));
        LBL_mesoStart = new QLabel(GRP_meso);
        LBL_mesoStart->setObjectName(QString::fromUtf8("LBL_mesoStart"));
        LBL_mesoStart->setGeometry(QRect(30, 20, 51, 20));
        COMBO_mesoType = new QComboBox(GRP_meso);
        COMBO_mesoType->setObjectName(QString::fromUtf8("COMBO_mesoType"));
        COMBO_mesoType->setGeometry(QRect(50, 80, 121, 22));
        LBL_mesoDuration = new QLabel(GRP_meso);
        LBL_mesoDuration->setObjectName(QString::fromUtf8("LBL_mesoDuration"));
        LBL_mesoDuration->setGeometry(QRect(320, 40, 71, 20));
        SPIN_mesoDuration = new QSpinBox(GRP_meso);
        SPIN_mesoDuration->setObjectName(QString::fromUtf8("SPIN_mesoDuration"));
        SPIN_mesoDuration->setGeometry(QRect(240, 40, 42, 22));
        TXT_mesoName = new QPlainTextEdit(GRP_meso);
        TXT_mesoName->setObjectName(QString::fromUtf8("TXT_mesoName"));
        TXT_mesoName->setGeometry(QRect(240, 70, 81, 31));
        LBL_mesoName = new QLabel(GRP_meso);
        LBL_mesoName->setObjectName(QString::fromUtf8("LBL_mesoName"));
        LBL_mesoName->setGeometry(QRect(340, 70, 71, 20));
        BTN_mesoAdd = new QPushButton(GRP_meso);
        BTN_mesoAdd->setObjectName(QString::fromUtf8("BTN_mesoAdd"));
        BTN_mesoAdd->setGeometry(QRect(130, 120, 161, 31));
        GRP_archer = new QGroupBox(LYT_macro);
        GRP_archer->setObjectName(QString::fromUtf8("GRP_archer"));
        GRP_archer->setGeometry(QRect(820, 10, 421, 201));
        LBL_archerDiv = new QLabel(GRP_archer);
        LBL_archerDiv->setObjectName(QString::fromUtf8("LBL_archerDiv"));
        LBL_archerDiv->setGeometry(QRect(0, 60, 91, 20));
        QFont font1;
        font1.setPointSize(16);
        LBL_archerDiv->setFont(font1);
        LBL_archerCat = new QLabel(GRP_archer);
        LBL_archerCat->setObjectName(QString::fromUtf8("LBL_archerCat"));
        LBL_archerCat->setGeometry(QRect(0, 30, 101, 20));
        LBL_archerCat->setFont(font1);
        LBL_archerPic = new QLabel(GRP_archer);
        LBL_archerPic->setObjectName(QString::fromUtf8("LBL_archerPic"));
        LBL_archerPic->setGeometry(QRect(220, 10, 201, 181));
        QFont font2;
        font2.setPointSize(48);
        font2.setBold(true);
        font2.setWeight(75);
        LBL_archerPic->setFont(font2);
        LBL_archerPic->setFrameShape(QFrame::Box);
        LBL_archerPic->setFrameShadow(QFrame::Raised);
        LBL_archerPic->setLineWidth(2);
        LBL_archerPic->setScaledContents(true);
        LBL_archerPic->setAlignment(Qt::AlignCenter);

        LYT_newMacroMain->addWidget(LYT_macro, 0, 0, 1, 1);


        retranslateUi(new_macro);

        QMetaObject::connectSlotsByName(new_macro);
    } // setupUi

    void retranslateUi(QDialog *new_macro)
    {
        new_macro->setWindowTitle(QCoreApplication::translate("new_macro", "AWM - Wkout Editor", nullptr));
        LYT_macro->setTitle(QCoreApplication::translate("new_macro", "MacroCiclo", nullptr));
        LBL_macroStart->setText(QCoreApplication::translate("new_macro", "INIZIO", nullptr));
        LBL_macroend->setText(QCoreApplication::translate("new_macro", "FINE", nullptr));
        GRP_meso->setTitle(QCoreApplication::translate("new_macro", "MesoCiclo", nullptr));
        LBL_mesoStart->setText(QCoreApplication::translate("new_macro", "INIZIO", nullptr));
        LBL_mesoDuration->setText(QCoreApplication::translate("new_macro", "DURATA", nullptr));
        LBL_mesoName->setText(QCoreApplication::translate("new_macro", "NOME", nullptr));
        BTN_mesoAdd->setText(QCoreApplication::translate("new_macro", "Aggiungi MesoCiclo", nullptr));
        GRP_archer->setTitle(QCoreApplication::translate("new_macro", "Arciere", nullptr));
        LBL_archerDiv->setText(QCoreApplication::translate("new_macro", "Divisione", nullptr));
        LBL_archerCat->setText(QCoreApplication::translate("new_macro", "Categoria", nullptr));
        LBL_archerPic->setText(QCoreApplication::translate("new_macro", "FOTO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_macro: public Ui_new_macro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_MACRO_H
