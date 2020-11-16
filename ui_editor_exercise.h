/********************************************************************************
** Form generated from reading UI file 'editor_exercise.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_EXERCISE_H
#define UI_EDITOR_EXERCISE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editor_exercise
{
public:
    QTextEdit *TXT_search;
    QGroupBox *GRP_main;
    QWidget *gridLayoutWidget;
    QGridLayout *LYT_exDB;
    QLabel *LBL_exId;
    QLabel *LBL_exType;
    QComboBox *COMBO_exSubCat;
    QComboBox *COMBO_exCat;
    QLabel *LBL_exSubtype;
    QLabel *LBL_exGrouping;
    QSpinBox *SPIN_exGrouping;
    QLineEdit *TXT_exId;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *LYT_exDetails;
    QLabel *LBL_exDesc;
    QLineEdit *TXT_exDesc;
    QLabel *LBL_exMission;
    QLineEdit *TXT_exMission;
    QLabel *LBL_exTarget;
    QLineEdit *TXT_exTarget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *LYT_exNumbers;
    QLabel *LBL_exUnit;
    QComboBox *COMBO_unit;
    QLabel *LBL_exQty;
    QSpinBox *SPIN_exQty;
    QLabel *LBL_exRestTime;
    QSpinBox *SPIN_exRestTime;
    QLabel *LBL_exExecTime;
    QSpinBox *SPIN_exExecTime;
    QPushButton *BTN_SaveEx;

    void setupUi(QDialog *editor_exercise)
    {
        if (editor_exercise->objectName().isEmpty())
            editor_exercise->setObjectName(QString::fromUtf8("editor_exercise"));
        editor_exercise->resize(1280, 800);
        editor_exercise->setMinimumSize(QSize(1280, 800));
        TXT_search = new QTextEdit(editor_exercise);
        TXT_search->setObjectName(QString::fromUtf8("TXT_search"));
        TXT_search->setGeometry(QRect(40, 20, 131, 21));
        TXT_search->setFrameShadow(QFrame::Raised);
        TXT_search->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TXT_search->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TXT_search->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        GRP_main = new QGroupBox(editor_exercise);
        GRP_main->setObjectName(QString::fromUtf8("GRP_main"));
        GRP_main->setGeometry(QRect(20, 60, 1251, 731));
        gridLayoutWidget = new QWidget(GRP_main);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 30, 271, 141));
        LYT_exDB = new QGridLayout(gridLayoutWidget);
        LYT_exDB->setObjectName(QString::fromUtf8("LYT_exDB"));
        LYT_exDB->setContentsMargins(0, 0, 0, 0);
        LBL_exId = new QLabel(gridLayoutWidget);
        LBL_exId->setObjectName(QString::fromUtf8("LBL_exId"));
        QFont font;
        font.setPointSize(12);
        LBL_exId->setFont(font);

        LYT_exDB->addWidget(LBL_exId, 2, 0, 1, 1);

        LBL_exType = new QLabel(gridLayoutWidget);
        LBL_exType->setObjectName(QString::fromUtf8("LBL_exType"));
        LBL_exType->setFont(font);

        LYT_exDB->addWidget(LBL_exType, 0, 0, 1, 1);

        COMBO_exSubCat = new QComboBox(gridLayoutWidget);
        COMBO_exSubCat->setObjectName(QString::fromUtf8("COMBO_exSubCat"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(COMBO_exSubCat->sizePolicy().hasHeightForWidth());
        COMBO_exSubCat->setSizePolicy(sizePolicy);

        LYT_exDB->addWidget(COMBO_exSubCat, 1, 1, 1, 1);

        COMBO_exCat = new QComboBox(gridLayoutWidget);
        COMBO_exCat->setObjectName(QString::fromUtf8("COMBO_exCat"));
        sizePolicy.setHeightForWidth(COMBO_exCat->sizePolicy().hasHeightForWidth());
        COMBO_exCat->setSizePolicy(sizePolicy);

        LYT_exDB->addWidget(COMBO_exCat, 0, 1, 1, 1);

        LBL_exSubtype = new QLabel(gridLayoutWidget);
        LBL_exSubtype->setObjectName(QString::fromUtf8("LBL_exSubtype"));
        LBL_exSubtype->setFont(font);

        LYT_exDB->addWidget(LBL_exSubtype, 1, 0, 1, 1);

        LBL_exGrouping = new QLabel(gridLayoutWidget);
        LBL_exGrouping->setObjectName(QString::fromUtf8("LBL_exGrouping"));
        LBL_exGrouping->setFont(font);

        LYT_exDB->addWidget(LBL_exGrouping, 3, 0, 1, 1);

        SPIN_exGrouping = new QSpinBox(gridLayoutWidget);
        SPIN_exGrouping->setObjectName(QString::fromUtf8("SPIN_exGrouping"));
        sizePolicy.setHeightForWidth(SPIN_exGrouping->sizePolicy().hasHeightForWidth());
        SPIN_exGrouping->setSizePolicy(sizePolicy);

        LYT_exDB->addWidget(SPIN_exGrouping, 3, 1, 1, 1);

        TXT_exId = new QLineEdit(gridLayoutWidget);
        TXT_exId->setObjectName(QString::fromUtf8("TXT_exId"));
        sizePolicy.setHeightForWidth(TXT_exId->sizePolicy().hasHeightForWidth());
        TXT_exId->setSizePolicy(sizePolicy);

        LYT_exDB->addWidget(TXT_exId, 2, 1, 1, 1);

        verticalLayoutWidget = new QWidget(GRP_main);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 180, 1071, 231));
        LYT_exDetails = new QVBoxLayout(verticalLayoutWidget);
        LYT_exDetails->setObjectName(QString::fromUtf8("LYT_exDetails"));
        LYT_exDetails->setSizeConstraint(QLayout::SetMinimumSize);
        LYT_exDetails->setContentsMargins(0, 0, 0, 0);
        LBL_exDesc = new QLabel(verticalLayoutWidget);
        LBL_exDesc->setObjectName(QString::fromUtf8("LBL_exDesc"));
        sizePolicy.setHeightForWidth(LBL_exDesc->sizePolicy().hasHeightForWidth());
        LBL_exDesc->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        LBL_exDesc->setFont(font1);

        LYT_exDetails->addWidget(LBL_exDesc);

        TXT_exDesc = new QLineEdit(verticalLayoutWidget);
        TXT_exDesc->setObjectName(QString::fromUtf8("TXT_exDesc"));

        LYT_exDetails->addWidget(TXT_exDesc);

        LBL_exMission = new QLabel(verticalLayoutWidget);
        LBL_exMission->setObjectName(QString::fromUtf8("LBL_exMission"));
        sizePolicy.setHeightForWidth(LBL_exMission->sizePolicy().hasHeightForWidth());
        LBL_exMission->setSizePolicy(sizePolicy);
        LBL_exMission->setFont(font1);

        LYT_exDetails->addWidget(LBL_exMission);

        TXT_exMission = new QLineEdit(verticalLayoutWidget);
        TXT_exMission->setObjectName(QString::fromUtf8("TXT_exMission"));

        LYT_exDetails->addWidget(TXT_exMission);

        LBL_exTarget = new QLabel(verticalLayoutWidget);
        LBL_exTarget->setObjectName(QString::fromUtf8("LBL_exTarget"));
        sizePolicy.setHeightForWidth(LBL_exTarget->sizePolicy().hasHeightForWidth());
        LBL_exTarget->setSizePolicy(sizePolicy);
        LBL_exTarget->setFont(font1);

        LYT_exDetails->addWidget(LBL_exTarget);

        TXT_exTarget = new QLineEdit(verticalLayoutWidget);
        TXT_exTarget->setObjectName(QString::fromUtf8("TXT_exTarget"));

        LYT_exDetails->addWidget(TXT_exTarget);

        horizontalLayoutWidget = new QWidget(GRP_main);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 430, 821, 51));
        LYT_exNumbers = new QHBoxLayout(horizontalLayoutWidget);
        LYT_exNumbers->setObjectName(QString::fromUtf8("LYT_exNumbers"));
        LYT_exNumbers->setContentsMargins(0, 0, 0, 0);
        LBL_exUnit = new QLabel(horizontalLayoutWidget);
        LBL_exUnit->setObjectName(QString::fromUtf8("LBL_exUnit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LBL_exUnit->sizePolicy().hasHeightForWidth());
        LBL_exUnit->setSizePolicy(sizePolicy1);
        LBL_exUnit->setFont(font1);

        LYT_exNumbers->addWidget(LBL_exUnit);

        COMBO_unit = new QComboBox(horizontalLayoutWidget);
        COMBO_unit->setObjectName(QString::fromUtf8("COMBO_unit"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(COMBO_unit->sizePolicy().hasHeightForWidth());
        COMBO_unit->setSizePolicy(sizePolicy2);

        LYT_exNumbers->addWidget(COMBO_unit);

        LBL_exQty = new QLabel(horizontalLayoutWidget);
        LBL_exQty->setObjectName(QString::fromUtf8("LBL_exQty"));
        sizePolicy1.setHeightForWidth(LBL_exQty->sizePolicy().hasHeightForWidth());
        LBL_exQty->setSizePolicy(sizePolicy1);
        LBL_exQty->setFont(font1);

        LYT_exNumbers->addWidget(LBL_exQty);

        SPIN_exQty = new QSpinBox(horizontalLayoutWidget);
        SPIN_exQty->setObjectName(QString::fromUtf8("SPIN_exQty"));
        sizePolicy2.setHeightForWidth(SPIN_exQty->sizePolicy().hasHeightForWidth());
        SPIN_exQty->setSizePolicy(sizePolicy2);

        LYT_exNumbers->addWidget(SPIN_exQty);

        LBL_exRestTime = new QLabel(horizontalLayoutWidget);
        LBL_exRestTime->setObjectName(QString::fromUtf8("LBL_exRestTime"));
        sizePolicy1.setHeightForWidth(LBL_exRestTime->sizePolicy().hasHeightForWidth());
        LBL_exRestTime->setSizePolicy(sizePolicy1);
        LBL_exRestTime->setFont(font1);

        LYT_exNumbers->addWidget(LBL_exRestTime);

        SPIN_exRestTime = new QSpinBox(horizontalLayoutWidget);
        SPIN_exRestTime->setObjectName(QString::fromUtf8("SPIN_exRestTime"));
        sizePolicy2.setHeightForWidth(SPIN_exRestTime->sizePolicy().hasHeightForWidth());
        SPIN_exRestTime->setSizePolicy(sizePolicy2);

        LYT_exNumbers->addWidget(SPIN_exRestTime);

        LBL_exExecTime = new QLabel(horizontalLayoutWidget);
        LBL_exExecTime->setObjectName(QString::fromUtf8("LBL_exExecTime"));
        sizePolicy1.setHeightForWidth(LBL_exExecTime->sizePolicy().hasHeightForWidth());
        LBL_exExecTime->setSizePolicy(sizePolicy1);
        LBL_exExecTime->setFont(font1);

        LYT_exNumbers->addWidget(LBL_exExecTime);

        SPIN_exExecTime = new QSpinBox(horizontalLayoutWidget);
        SPIN_exExecTime->setObjectName(QString::fromUtf8("SPIN_exExecTime"));
        sizePolicy2.setHeightForWidth(SPIN_exExecTime->sizePolicy().hasHeightForWidth());
        SPIN_exExecTime->setSizePolicy(sizePolicy2);

        LYT_exNumbers->addWidget(SPIN_exExecTime);

        BTN_SaveEx = new QPushButton(GRP_main);
        BTN_SaveEx->setObjectName(QString::fromUtf8("BTN_SaveEx"));
        BTN_SaveEx->setGeometry(QRect(1100, 670, 75, 23));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(BTN_SaveEx->sizePolicy().hasHeightForWidth());
        BTN_SaveEx->setSizePolicy(sizePolicy3);

        retranslateUi(editor_exercise);

        QMetaObject::connectSlotsByName(editor_exercise);
    } // setupUi

    void retranslateUi(QDialog *editor_exercise)
    {
        editor_exercise->setWindowTitle(QCoreApplication::translate("editor_exercise", "AWM - Exercise Editor", nullptr));
        TXT_search->setHtml(QCoreApplication::translate("editor_exercise", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">search ex id or name</span></p></body></html>", nullptr));
        GRP_main->setTitle(QCoreApplication::translate("editor_exercise", "ex id", nullptr));
        LBL_exId->setText(QCoreApplication::translate("editor_exercise", "ID", nullptr));
        LBL_exType->setText(QCoreApplication::translate("editor_exercise", "Type", nullptr));
        LBL_exSubtype->setText(QCoreApplication::translate("editor_exercise", "SubType", nullptr));
        LBL_exGrouping->setText(QCoreApplication::translate("editor_exercise", "Grouping", nullptr));
        LBL_exDesc->setText(QCoreApplication::translate("editor_exercise", "Description", nullptr));
        LBL_exMission->setText(QCoreApplication::translate("editor_exercise", "Mission", nullptr));
        LBL_exTarget->setText(QCoreApplication::translate("editor_exercise", "Target", nullptr));
        LBL_exUnit->setText(QCoreApplication::translate("editor_exercise", "Unit", nullptr));
        LBL_exQty->setText(QCoreApplication::translate("editor_exercise", "Qty", nullptr));
        LBL_exRestTime->setText(QCoreApplication::translate("editor_exercise", "Rest Time MIN", nullptr));
        LBL_exExecTime->setText(QCoreApplication::translate("editor_exercise", "Estimated Execution Time MIN", nullptr));
        BTN_SaveEx->setText(QCoreApplication::translate("editor_exercise", "Save Exercise", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editor_exercise: public Ui_editor_exercise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_EXERCISE_H
