/********************************************************************************
** Form generated from reading UI file 'manager_workout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_WORKOUT_H
#define UI_MANAGER_WORKOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_manager_workout
{
public:
    QLabel *label;

    void setupUi(QDialog *manager_workout)
    {
        if (manager_workout->objectName().isEmpty())
            manager_workout->setObjectName(QString::fromUtf8("manager_workout"));
        manager_workout->resize(1280, 800);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(manager_workout->sizePolicy().hasHeightForWidth());
        manager_workout->setSizePolicy(sizePolicy);
        manager_workout->setMinimumSize(QSize(1280, 800));
        label = new QLabel(manager_workout);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 130, 931, 431));
        QFont font;
        font.setPointSize(72);
        label->setFont(font);

        retranslateUi(manager_workout);

        QMetaObject::connectSlotsByName(manager_workout);
    } // setupUi

    void retranslateUi(QDialog *manager_workout)
    {
        manager_workout->setWindowTitle(QCoreApplication::translate("manager_workout", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("manager_workout", "WKOUT MANAGER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manager_workout: public Ui_manager_workout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_WORKOUT_H
