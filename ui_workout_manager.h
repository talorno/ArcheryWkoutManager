/********************************************************************************
** Form generated from reading UI file 'workout_manager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKOUT_MANAGER_H
#define UI_WORKOUT_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workout_manager
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *LYT_main;
    QListView *LIST_wkouts_meso;
    QListView *LIST_wkouts_athletes;
    QListView *LIST_wkouts_macro;
    QVBoxLayout *LYT_btn_macro;
    QPushButton *BTN_macro_new;
    QPushButton *BTN_macro_del;
    QVBoxLayout *LYT_btn_meso;
    QPushButton *BTN_meso_new;
    QPushButton *BTN_meso_del;

    void setupUi(QDialog *workout_manager)
    {
        if (workout_manager->objectName().isEmpty())
            workout_manager->setObjectName(QString::fromUtf8("workout_manager"));
        workout_manager->resize(1280, 800);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(workout_manager->sizePolicy().hasHeightForWidth());
        workout_manager->setSizePolicy(sizePolicy);
        workout_manager->setMinimumSize(QSize(1280, 800));
        workout_manager->setSizeGripEnabled(false);
        workout_manager->setModal(true);
        gridLayoutWidget = new QWidget(workout_manager);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 1261, 781));
        LYT_main = new QGridLayout(gridLayoutWidget);
        LYT_main->setObjectName(QString::fromUtf8("LYT_main"));
        LYT_main->setContentsMargins(0, 0, 0, 0);
        LIST_wkouts_meso = new QListView(gridLayoutWidget);
        LIST_wkouts_meso->setObjectName(QString::fromUtf8("LIST_wkouts_meso"));

        LYT_main->addWidget(LIST_wkouts_meso, 0, 2, 1, 1);

        LIST_wkouts_athletes = new QListView(gridLayoutWidget);
        LIST_wkouts_athletes->setObjectName(QString::fromUtf8("LIST_wkouts_athletes"));

        LYT_main->addWidget(LIST_wkouts_athletes, 0, 0, 1, 1);

        LIST_wkouts_macro = new QListView(gridLayoutWidget);
        LIST_wkouts_macro->setObjectName(QString::fromUtf8("LIST_wkouts_macro"));

        LYT_main->addWidget(LIST_wkouts_macro, 0, 1, 1, 1);

        LYT_btn_macro = new QVBoxLayout();
        LYT_btn_macro->setObjectName(QString::fromUtf8("LYT_btn_macro"));
        BTN_macro_new = new QPushButton(gridLayoutWidget);
        BTN_macro_new->setObjectName(QString::fromUtf8("BTN_macro_new"));

        LYT_btn_macro->addWidget(BTN_macro_new);

        BTN_macro_del = new QPushButton(gridLayoutWidget);
        BTN_macro_del->setObjectName(QString::fromUtf8("BTN_macro_del"));

        LYT_btn_macro->addWidget(BTN_macro_del);


        LYT_main->addLayout(LYT_btn_macro, 1, 2, 1, 1);

        LYT_btn_meso = new QVBoxLayout();
        LYT_btn_meso->setObjectName(QString::fromUtf8("LYT_btn_meso"));
        BTN_meso_new = new QPushButton(gridLayoutWidget);
        BTN_meso_new->setObjectName(QString::fromUtf8("BTN_meso_new"));

        LYT_btn_meso->addWidget(BTN_meso_new);

        BTN_meso_del = new QPushButton(gridLayoutWidget);
        BTN_meso_del->setObjectName(QString::fromUtf8("BTN_meso_del"));

        LYT_btn_meso->addWidget(BTN_meso_del);


        LYT_main->addLayout(LYT_btn_meso, 1, 1, 1, 1);


        retranslateUi(workout_manager);

        QMetaObject::connectSlotsByName(workout_manager);
    } // setupUi

    void retranslateUi(QDialog *workout_manager)
    {
        workout_manager->setWindowTitle(QCoreApplication::translate("workout_manager", "AWM - Workout Manager", nullptr));
        BTN_macro_new->setText(QCoreApplication::translate("workout_manager", "Nuovo MacroCiclo", nullptr));
        BTN_macro_del->setText(QCoreApplication::translate("workout_manager", "Cancella MacroCiclo", nullptr));
        BTN_meso_new->setText(QCoreApplication::translate("workout_manager", "Nuovo MesoCiclo", nullptr));
        BTN_meso_del->setText(QCoreApplication::translate("workout_manager", "Cancella MesoCiclo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workout_manager: public Ui_workout_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKOUT_MANAGER_H
