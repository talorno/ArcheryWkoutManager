/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *label;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(about->sizePolicy().hasHeightForWidth());
        about->setSizePolicy(sizePolicy);
        label = new QLabel(about);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 471, 481));

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QCoreApplication::translate("about", "AWM - About", nullptr));
        label->setText(QCoreApplication::translate("about", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Archery Workout Manager </span></p><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:12pt;\">An </span><span style=\" font-size:12pt; text-decoration: underline;\">awesome</span><span style=\" font-size:12pt;\"> Archery Workout Tool<br/>brought to you by</span></p><p align=\"center\"><span style=\" font-size:12pt;\"><br/></span><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Luigi Marcaccini<br/></span><span style=\" font-size:12pt;\">Training Algorythms - Training Assessment - DB Engineering</span></p><p align=\"center\"><span style=\" font-size:12pt;\"><br/></span><span style=\" font-size:12pt; font-weight:600; font-style:italic;\">Giovanni Ricciardi<br/></span><span style=\" font-size:12pt;\">Qt Engineering</span></p><p align=\"center\"><br/></p><p align=\"center\"><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
