/********************************************************************************
** Form generated from reading UI file 'new_plan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_PLAN_H
#define UI_NEW_PLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_plan
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *LYT_main;
    QGroupBox *GROUPBOX_main;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *COMBO_athleteName;
    QSpacerItem *horizontalSpacer;
    QComboBox *COMBO_macro;
    QComboBox *COMBO_meso;
    QComboBox *COMBO_session;
    QTableView *TBL_qty;
    QTableView *TBL_exList;
    QTableView *TBL_exQty;
    QPushButton *BTN_closeEditor;

    void setupUi(QDialog *new_plan)
    {
        if (new_plan->objectName().isEmpty())
            new_plan->setObjectName(QString::fromUtf8("new_plan"));
        new_plan->resize(1280, 800);
        new_plan->setMinimumSize(QSize(1280, 800));
        QFont font;
        font.setPointSize(12);
        new_plan->setFont(font);
        gridLayoutWidget = new QWidget(new_plan);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 1261, 781));
        LYT_main = new QGridLayout(gridLayoutWidget);
        LYT_main->setObjectName(QString::fromUtf8("LYT_main"));
        LYT_main->setContentsMargins(0, 0, 0, 0);
        GROUPBOX_main = new QGroupBox(gridLayoutWidget);
        GROUPBOX_main->setObjectName(QString::fromUtf8("GROUPBOX_main"));
        horizontalLayoutWidget = new QWidget(GROUPBOX_main);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 10, 541, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        COMBO_athleteName = new QComboBox(horizontalLayoutWidget);
        COMBO_athleteName->setObjectName(QString::fromUtf8("COMBO_athleteName"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(COMBO_athleteName->sizePolicy().hasHeightForWidth());
        COMBO_athleteName->setSizePolicy(sizePolicy);
        COMBO_athleteName->setMinimumSize(QSize(50, 0));

        horizontalLayout->addWidget(COMBO_athleteName);

        horizontalSpacer = new QSpacerItem(80, 0, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        COMBO_macro = new QComboBox(horizontalLayoutWidget);
        COMBO_macro->setObjectName(QString::fromUtf8("COMBO_macro"));

        horizontalLayout->addWidget(COMBO_macro);

        COMBO_meso = new QComboBox(horizontalLayoutWidget);
        COMBO_meso->setObjectName(QString::fromUtf8("COMBO_meso"));

        horizontalLayout->addWidget(COMBO_meso);

        COMBO_session = new QComboBox(horizontalLayoutWidget);
        COMBO_session->setObjectName(QString::fromUtf8("COMBO_session"));

        horizontalLayout->addWidget(COMBO_session);

        TBL_qty = new QTableView(GROUPBOX_main);
        TBL_qty->setObjectName(QString::fromUtf8("TBL_qty"));
        TBL_qty->setGeometry(QRect(770, 20, 471, 131));
        TBL_exList = new QTableView(GROUPBOX_main);
        TBL_exList->setObjectName(QString::fromUtf8("TBL_exList"));
        TBL_exList->setGeometry(QRect(20, 130, 521, 621));
        TBL_exQty = new QTableView(GROUPBOX_main);
        TBL_exQty->setObjectName(QString::fromUtf8("TBL_exQty"));
        TBL_exQty->setGeometry(QRect(680, 200, 561, 401));
        BTN_closeEditor = new QPushButton(GROUPBOX_main);
        BTN_closeEditor->setObjectName(QString::fromUtf8("BTN_closeEditor"));
        BTN_closeEditor->setGeometry(QRect(1034, 742, 171, 31));
        QFont font1;
        font1.setPointSize(11);
        BTN_closeEditor->setFont(font1);

        LYT_main->addWidget(GROUPBOX_main, 0, 0, 1, 1);


        retranslateUi(new_plan);

        QMetaObject::connectSlotsByName(new_plan);
    } // setupUi

    void retranslateUi(QDialog *new_plan)
    {
        new_plan->setWindowTitle(QCoreApplication::translate("new_plan", "AWM -Create New Workout", nullptr));
        GROUPBOX_main->setTitle(QCoreApplication::translate("new_plan", "Creazione Nuovo Piano Di Allenamento", nullptr));
        BTN_closeEditor->setText(QCoreApplication::translate("new_plan", "Chiudi Editor Piano", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_plan: public Ui_new_plan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_PLAN_H
