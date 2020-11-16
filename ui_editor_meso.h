/********************************************************************************
** Form generated from reading UI file 'editor_meso.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_MESO_H
#define UI_EDITOR_MESO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QtCharts"

QT_BEGIN_NAMESPACE

class Ui_editor_meso
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *LYT_main;
    QGroupBox *GRP_meso;
    QGroupBox *GRP_newmeso;
    QDateEdit *DATE_mesoStart;
    QLabel *LBL_mesoStart;
    QSpinBox *SPIN_mesoDuration;
    QLabel *LBL_mesoDuration;
    QComboBox *COMBO_mesoType;
    QLabel *LBL_mesoType;
    QPlainTextEdit *TXT_mesoName;
    QLabel *LBL_mesoName;
    QComboBox *COMBO_mesoSelect;
    QPushButton *BTN_deleteMeso;
    QGroupBox *GRP_distribution;
    QWidget *gridLayoutWidget_2;
    QGridLayout *LYT_GRP_distribu;
    QLabel *LBL_coordSlider;
    QSlider *SLIDER_coordSlider;
    QLabel *LBL_techSlider;
    QSlider *SLIDER_techSlider;
    QSlider *SLIDER_condSlider;
    QLabel *LBL_condSlider;
    QGroupBox *GRP_mesoNumbers;
    QWidget *gridLayoutWidget_3;
    QGridLayout *GRP_mesoNumbers_LYT;
    QLabel *LBL_arrowsMax;
    QSpinBox *SPIN_arrowsMin;
    QLabel *LBL_arrowsMin;
    QLabel *LBL_wkoutsQty;
    QLabel *LBL_arrowsQty;
    QSpinBox *SPIN_arrowsMax;
    QSpinBox *SPIN_wkoutsQty;
    QPushButton *BTN_generateSessions;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *LYT_btns;
    QPushButton *BTN_sessionEditor;
    QPushButton *BTN_generateReport;
    QPushButton *BTN_closeEditor;
    QChartView *GRAPH_mesoGraph;

    void setupUi(QDialog *editor_meso)
    {
        if (editor_meso->objectName().isEmpty())
            editor_meso->setObjectName(QString::fromUtf8("editor_meso"));
        editor_meso->resize(1280, 800);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editor_meso->sizePolicy().hasHeightForWidth());
        editor_meso->setSizePolicy(sizePolicy);
        editor_meso->setMinimumSize(QSize(1280, 800));
        QFont font;
        font.setPointSize(12);
        editor_meso->setFont(font);
        gridLayoutWidget = new QWidget(editor_meso);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 1261, 781));
        LYT_main = new QGridLayout(gridLayoutWidget);
        LYT_main->setObjectName(QString::fromUtf8("LYT_main"));
        LYT_main->setContentsMargins(0, 0, 0, 0);
        GRP_meso = new QGroupBox(gridLayoutWidget);
        GRP_meso->setObjectName(QString::fromUtf8("GRP_meso"));
        GRP_newmeso = new QGroupBox(GRP_meso);
        GRP_newmeso->setObjectName(QString::fromUtf8("GRP_newmeso"));
        GRP_newmeso->setGeometry(QRect(20, 70, 361, 161));
        DATE_mesoStart = new QDateEdit(GRP_newmeso);
        DATE_mesoStart->setObjectName(QString::fromUtf8("DATE_mesoStart"));
        DATE_mesoStart->setGeometry(QRect(20, 50, 110, 22));
        LBL_mesoStart = new QLabel(GRP_newmeso);
        LBL_mesoStart->setObjectName(QString::fromUtf8("LBL_mesoStart"));
        LBL_mesoStart->setGeometry(QRect(20, 30, 61, 16));
        SPIN_mesoDuration = new QSpinBox(GRP_newmeso);
        SPIN_mesoDuration->setObjectName(QString::fromUtf8("SPIN_mesoDuration"));
        SPIN_mesoDuration->setGeometry(QRect(160, 50, 42, 22));
        LBL_mesoDuration = new QLabel(GRP_newmeso);
        LBL_mesoDuration->setObjectName(QString::fromUtf8("LBL_mesoDuration"));
        LBL_mesoDuration->setGeometry(QRect(160, 30, 141, 16));
        COMBO_mesoType = new QComboBox(GRP_newmeso);
        COMBO_mesoType->setObjectName(QString::fromUtf8("COMBO_mesoType"));
        COMBO_mesoType->setGeometry(QRect(20, 110, 111, 22));
        LBL_mesoType = new QLabel(GRP_newmeso);
        LBL_mesoType->setObjectName(QString::fromUtf8("LBL_mesoType"));
        LBL_mesoType->setGeometry(QRect(20, 90, 61, 16));
        TXT_mesoName = new QPlainTextEdit(GRP_newmeso);
        TXT_mesoName->setObjectName(QString::fromUtf8("TXT_mesoName"));
        TXT_mesoName->setGeometry(QRect(160, 110, 111, 21));
        LBL_mesoName = new QLabel(GRP_newmeso);
        LBL_mesoName->setObjectName(QString::fromUtf8("LBL_mesoName"));
        LBL_mesoName->setGeometry(QRect(160, 90, 61, 16));
        COMBO_mesoSelect = new QComboBox(GRP_meso);
        COMBO_mesoSelect->setObjectName(QString::fromUtf8("COMBO_mesoSelect"));
        COMBO_mesoSelect->setGeometry(QRect(20, 30, 141, 22));
        BTN_deleteMeso = new QPushButton(GRP_meso);
        BTN_deleteMeso->setObjectName(QString::fromUtf8("BTN_deleteMeso"));
        BTN_deleteMeso->setGeometry(QRect(190, 30, 151, 23));
        GRP_distribution = new QGroupBox(GRP_meso);
        GRP_distribution->setObjectName(QString::fromUtf8("GRP_distribution"));
        GRP_distribution->setGeometry(QRect(400, 20, 381, 211));
        gridLayoutWidget_2 = new QWidget(GRP_distribution);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 30, 331, 171));
        LYT_GRP_distribu = new QGridLayout(gridLayoutWidget_2);
        LYT_GRP_distribu->setObjectName(QString::fromUtf8("LYT_GRP_distribu"));
        LYT_GRP_distribu->setContentsMargins(0, 0, 0, 0);
        LBL_coordSlider = new QLabel(gridLayoutWidget_2);
        LBL_coordSlider->setObjectName(QString::fromUtf8("LBL_coordSlider"));

        LYT_GRP_distribu->addWidget(LBL_coordSlider, 1, 1, 1, 1);

        SLIDER_coordSlider = new QSlider(gridLayoutWidget_2);
        SLIDER_coordSlider->setObjectName(QString::fromUtf8("SLIDER_coordSlider"));
        SLIDER_coordSlider->setSingleStep(10);
        SLIDER_coordSlider->setTracking(true);
        SLIDER_coordSlider->setOrientation(Qt::Vertical);
        SLIDER_coordSlider->setInvertedAppearance(false);
        SLIDER_coordSlider->setInvertedControls(true);
        SLIDER_coordSlider->setTickPosition(QSlider::TicksAbove);
        SLIDER_coordSlider->setTickInterval(10);

        LYT_GRP_distribu->addWidget(SLIDER_coordSlider, 0, 1, 1, 1);

        LBL_techSlider = new QLabel(gridLayoutWidget_2);
        LBL_techSlider->setObjectName(QString::fromUtf8("LBL_techSlider"));

        LYT_GRP_distribu->addWidget(LBL_techSlider, 1, 2, 1, 1);

        SLIDER_techSlider = new QSlider(gridLayoutWidget_2);
        SLIDER_techSlider->setObjectName(QString::fromUtf8("SLIDER_techSlider"));
        SLIDER_techSlider->setSingleStep(10);
        SLIDER_techSlider->setTracking(true);
        SLIDER_techSlider->setOrientation(Qt::Vertical);
        SLIDER_techSlider->setInvertedAppearance(false);
        SLIDER_techSlider->setInvertedControls(true);
        SLIDER_techSlider->setTickPosition(QSlider::TicksAbove);
        SLIDER_techSlider->setTickInterval(10);

        LYT_GRP_distribu->addWidget(SLIDER_techSlider, 0, 2, 1, 1);

        SLIDER_condSlider = new QSlider(gridLayoutWidget_2);
        SLIDER_condSlider->setObjectName(QString::fromUtf8("SLIDER_condSlider"));
        SLIDER_condSlider->setSingleStep(10);
        SLIDER_condSlider->setTracking(true);
        SLIDER_condSlider->setOrientation(Qt::Vertical);
        SLIDER_condSlider->setInvertedAppearance(false);
        SLIDER_condSlider->setInvertedControls(true);
        SLIDER_condSlider->setTickPosition(QSlider::TicksAbove);
        SLIDER_condSlider->setTickInterval(10);

        LYT_GRP_distribu->addWidget(SLIDER_condSlider, 0, 0, 1, 1);

        LBL_condSlider = new QLabel(gridLayoutWidget_2);
        LBL_condSlider->setObjectName(QString::fromUtf8("LBL_condSlider"));

        LYT_GRP_distribu->addWidget(LBL_condSlider, 1, 0, 1, 1);

        GRP_mesoNumbers = new QGroupBox(GRP_meso);
        GRP_mesoNumbers->setObjectName(QString::fromUtf8("GRP_mesoNumbers"));
        GRP_mesoNumbers->setGeometry(QRect(20, 240, 461, 131));
        gridLayoutWidget_3 = new QWidget(GRP_mesoNumbers);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 10, 431, 111));
        GRP_mesoNumbers_LYT = new QGridLayout(gridLayoutWidget_3);
        GRP_mesoNumbers_LYT->setObjectName(QString::fromUtf8("GRP_mesoNumbers_LYT"));
        GRP_mesoNumbers_LYT->setContentsMargins(0, 0, 0, 0);
        LBL_arrowsMax = new QLabel(gridLayoutWidget_3);
        LBL_arrowsMax->setObjectName(QString::fromUtf8("LBL_arrowsMax"));

        GRP_mesoNumbers_LYT->addWidget(LBL_arrowsMax, 1, 3, 1, 1);

        SPIN_arrowsMin = new QSpinBox(gridLayoutWidget_3);
        SPIN_arrowsMin->setObjectName(QString::fromUtf8("SPIN_arrowsMin"));

        GRP_mesoNumbers_LYT->addWidget(SPIN_arrowsMin, 1, 2, 1, 1);

        LBL_arrowsMin = new QLabel(gridLayoutWidget_3);
        LBL_arrowsMin->setObjectName(QString::fromUtf8("LBL_arrowsMin"));

        GRP_mesoNumbers_LYT->addWidget(LBL_arrowsMin, 1, 1, 1, 1);

        LBL_wkoutsQty = new QLabel(gridLayoutWidget_3);
        LBL_wkoutsQty->setObjectName(QString::fromUtf8("LBL_wkoutsQty"));

        GRP_mesoNumbers_LYT->addWidget(LBL_wkoutsQty, 0, 0, 1, 1);

        LBL_arrowsQty = new QLabel(gridLayoutWidget_3);
        LBL_arrowsQty->setObjectName(QString::fromUtf8("LBL_arrowsQty"));

        GRP_mesoNumbers_LYT->addWidget(LBL_arrowsQty, 1, 0, 1, 1);

        SPIN_arrowsMax = new QSpinBox(gridLayoutWidget_3);
        SPIN_arrowsMax->setObjectName(QString::fromUtf8("SPIN_arrowsMax"));

        GRP_mesoNumbers_LYT->addWidget(SPIN_arrowsMax, 1, 4, 1, 1);

        SPIN_wkoutsQty = new QSpinBox(gridLayoutWidget_3);
        SPIN_wkoutsQty->setObjectName(QString::fromUtf8("SPIN_wkoutsQty"));

        GRP_mesoNumbers_LYT->addWidget(SPIN_wkoutsQty, 0, 2, 1, 1);

        BTN_generateSessions = new QPushButton(GRP_meso);
        BTN_generateSessions->setObjectName(QString::fromUtf8("BTN_generateSessions"));
        BTN_generateSessions->setGeometry(QRect(540, 290, 151, 31));
        verticalLayoutWidget = new QWidget(GRP_meso);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1090, 520, 151, 221));
        LYT_btns = new QVBoxLayout(verticalLayoutWidget);
        LYT_btns->setObjectName(QString::fromUtf8("LYT_btns"));
        LYT_btns->setContentsMargins(0, 0, 0, 0);
        BTN_sessionEditor = new QPushButton(verticalLayoutWidget);
        BTN_sessionEditor->setObjectName(QString::fromUtf8("BTN_sessionEditor"));

        LYT_btns->addWidget(BTN_sessionEditor);

        BTN_generateReport = new QPushButton(verticalLayoutWidget);
        BTN_generateReport->setObjectName(QString::fromUtf8("BTN_generateReport"));

        LYT_btns->addWidget(BTN_generateReport);

        BTN_closeEditor = new QPushButton(verticalLayoutWidget);
        BTN_closeEditor->setObjectName(QString::fromUtf8("BTN_closeEditor"));

        LYT_btns->addWidget(BTN_closeEditor);

        GRAPH_mesoGraph = new QChartView(GRP_meso);
        GRAPH_mesoGraph->setObjectName(QString::fromUtf8("GRAPH_mesoGraph"));
        GRAPH_mesoGraph->setGeometry(QRect(20, 380, 1031, 391));

        LYT_main->addWidget(GRP_meso, 0, 0, 1, 1);


        retranslateUi(editor_meso);

        QMetaObject::connectSlotsByName(editor_meso);
    } // setupUi

    void retranslateUi(QDialog *editor_meso)
    {
        editor_meso->setWindowTitle(QCoreApplication::translate("editor_meso", "AWM - MesoCycle Editor", nullptr));
        GRP_meso->setTitle(QCoreApplication::translate("editor_meso", "Editor MesoCiclo", nullptr));
        GRP_newmeso->setTitle(QCoreApplication::translate("editor_meso", "MesoCiclo", nullptr));
        LBL_mesoStart->setText(QCoreApplication::translate("editor_meso", "INIZIO", nullptr));
        LBL_mesoDuration->setText(QCoreApplication::translate("editor_meso", "DURATA (SETT.)", nullptr));
        LBL_mesoType->setText(QCoreApplication::translate("editor_meso", "TIPO", nullptr));
        LBL_mesoName->setText(QCoreApplication::translate("editor_meso", "NOME", nullptr));
        BTN_deleteMeso->setText(QCoreApplication::translate("editor_meso", "Rimuovi MesoCiclo", nullptr));
        GRP_distribution->setTitle(QCoreApplication::translate("editor_meso", "Distribuzione", nullptr));
        LBL_coordSlider->setText(QCoreApplication::translate("editor_meso", "COORD", nullptr));
        LBL_techSlider->setText(QCoreApplication::translate("editor_meso", "TECH", nullptr));
        LBL_condSlider->setText(QCoreApplication::translate("editor_meso", "COND", nullptr));
        GRP_mesoNumbers->setTitle(QString());
        LBL_arrowsMax->setText(QCoreApplication::translate("editor_meso", "MAX", nullptr));
        LBL_arrowsMin->setText(QCoreApplication::translate("editor_meso", "MIN", nullptr));
        LBL_wkoutsQty->setText(QCoreApplication::translate("editor_meso", "ALLENAMENTI PER SETTIMANA", nullptr));
        LBL_arrowsQty->setText(QCoreApplication::translate("editor_meso", "NUM FRECCE", nullptr));
        BTN_generateSessions->setText(QCoreApplication::translate("editor_meso", "Genera Sessioni", nullptr));
        BTN_sessionEditor->setText(QCoreApplication::translate("editor_meso", "Editor Sessioni", nullptr));
        BTN_generateReport->setText(QCoreApplication::translate("editor_meso", "Genera Report", nullptr));
        BTN_closeEditor->setText(QCoreApplication::translate("editor_meso", "Chiudi Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editor_meso: public Ui_editor_meso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_MESO_H
