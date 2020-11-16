/********************************************************************************
** Form generated from reading UI file 'list_athletes.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST_ATHLETES_H
#define UI_LIST_ATHLETES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_list_athletes
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *LYT_listAthlete;
    QTableView *TBL_athletesList;
    QGridLayout *LYT_btns;
    QPushButton *BTN_newAthlete;
    QPushButton *pushButton;

    void setupUi(QDialog *list_athletes)
    {
        if (list_athletes->objectName().isEmpty())
            list_athletes->setObjectName(QString::fromUtf8("list_athletes"));
        list_athletes->resize(1280, 800);
        list_athletes->setMinimumSize(QSize(1280, 800));
        QFont font;
        font.setPointSize(12);
        list_athletes->setFont(font);
        gridLayoutWidget = new QWidget(list_athletes);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 1261, 781));
        LYT_listAthlete = new QGridLayout(gridLayoutWidget);
        LYT_listAthlete->setObjectName(QString::fromUtf8("LYT_listAthlete"));
        LYT_listAthlete->setContentsMargins(0, 0, 0, 0);
        TBL_athletesList = new QTableView(gridLayoutWidget);
        TBL_athletesList->setObjectName(QString::fromUtf8("TBL_athletesList"));

        LYT_listAthlete->addWidget(TBL_athletesList, 0, 0, 1, 1);

        LYT_btns = new QGridLayout();
        LYT_btns->setObjectName(QString::fromUtf8("LYT_btns"));
        BTN_newAthlete = new QPushButton(gridLayoutWidget);
        BTN_newAthlete->setObjectName(QString::fromUtf8("BTN_newAthlete"));

        LYT_btns->addWidget(BTN_newAthlete, 0, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        LYT_btns->addWidget(pushButton, 0, 0, 1, 1);


        LYT_listAthlete->addLayout(LYT_btns, 1, 0, 1, 1);


        retranslateUi(list_athletes);

        QMetaObject::connectSlotsByName(list_athletes);
    } // setupUi

    void retranslateUi(QDialog *list_athletes)
    {
        list_athletes->setWindowTitle(QCoreApplication::translate("list_athletes", "Athletes List", nullptr));
        BTN_newAthlete->setText(QCoreApplication::translate("list_athletes", "Nuovo Atleta", nullptr));
        pushButton->setText(QCoreApplication::translate("list_athletes", "Elimina Atleta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class list_athletes: public Ui_list_athletes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_ATHLETES_H
