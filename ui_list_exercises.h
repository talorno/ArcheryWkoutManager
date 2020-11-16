/********************************************************************************
** Form generated from reading UI file 'list_exercises.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST_EXERCISES_H
#define UI_LIST_EXERCISES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_list_exercises
{
public:
    QLineEdit *TXT_search;
    QGroupBox *GRP_listEx_Filters;
    QWidget *gridLayoutWidget;
    QGridLayout *GRP_listEx_Filters_LYT;
    QComboBox *COMBO_exCat;
    QLabel *LBL_filtersCat;
    QSpacerItem *horizontalSpacer;
    QLabel *LBL_filtersGrouping;
    QLabel *LBL_filtersSubCat;
    QLineEdit *TXT_filtersGrouping;
    QPushButton *BTN_filtersReset;
    QComboBox *COMBO_exSubCat;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *BTN_addEx;
    QTableView *LIST_listEx;

    void setupUi(QDialog *list_exercises)
    {
        if (list_exercises->objectName().isEmpty())
            list_exercises->setObjectName(QString::fromUtf8("list_exercises"));
        list_exercises->resize(1280, 800);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(list_exercises->sizePolicy().hasHeightForWidth());
        list_exercises->setSizePolicy(sizePolicy);
        list_exercises->setMinimumSize(QSize(1280, 800));
        QFont font;
        font.setPointSize(12);
        list_exercises->setFont(font);
        TXT_search = new QLineEdit(list_exercises);
        TXT_search->setObjectName(QString::fromUtf8("TXT_search"));
        TXT_search->setGeometry(QRect(30, 10, 113, 20));
        GRP_listEx_Filters = new QGroupBox(list_exercises);
        GRP_listEx_Filters->setObjectName(QString::fromUtf8("GRP_listEx_Filters"));
        GRP_listEx_Filters->setGeometry(QRect(180, 10, 731, 111));
        gridLayoutWidget = new QWidget(GRP_listEx_Filters);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 40, 681, 62));
        GRP_listEx_Filters_LYT = new QGridLayout(gridLayoutWidget);
        GRP_listEx_Filters_LYT->setObjectName(QString::fromUtf8("GRP_listEx_Filters_LYT"));
        GRP_listEx_Filters_LYT->setContentsMargins(0, 0, 0, 0);
        COMBO_exCat = new QComboBox(gridLayoutWidget);
        COMBO_exCat->setObjectName(QString::fromUtf8("COMBO_exCat"));
        sizePolicy.setHeightForWidth(COMBO_exCat->sizePolicy().hasHeightForWidth());
        COMBO_exCat->setSizePolicy(sizePolicy);

        GRP_listEx_Filters_LYT->addWidget(COMBO_exCat, 1, 0, 1, 1);

        LBL_filtersCat = new QLabel(gridLayoutWidget);
        LBL_filtersCat->setObjectName(QString::fromUtf8("LBL_filtersCat"));

        GRP_listEx_Filters_LYT->addWidget(LBL_filtersCat, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        GRP_listEx_Filters_LYT->addItem(horizontalSpacer, 1, 1, 1, 1);

        LBL_filtersGrouping = new QLabel(gridLayoutWidget);
        LBL_filtersGrouping->setObjectName(QString::fromUtf8("LBL_filtersGrouping"));

        GRP_listEx_Filters_LYT->addWidget(LBL_filtersGrouping, 0, 4, 1, 1);

        LBL_filtersSubCat = new QLabel(gridLayoutWidget);
        LBL_filtersSubCat->setObjectName(QString::fromUtf8("LBL_filtersSubCat"));

        GRP_listEx_Filters_LYT->addWidget(LBL_filtersSubCat, 0, 2, 1, 1);

        TXT_filtersGrouping = new QLineEdit(gridLayoutWidget);
        TXT_filtersGrouping->setObjectName(QString::fromUtf8("TXT_filtersGrouping"));
        sizePolicy.setHeightForWidth(TXT_filtersGrouping->sizePolicy().hasHeightForWidth());
        TXT_filtersGrouping->setSizePolicy(sizePolicy);

        GRP_listEx_Filters_LYT->addWidget(TXT_filtersGrouping, 1, 4, 1, 1);

        BTN_filtersReset = new QPushButton(gridLayoutWidget);
        BTN_filtersReset->setObjectName(QString::fromUtf8("BTN_filtersReset"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BTN_filtersReset->sizePolicy().hasHeightForWidth());
        BTN_filtersReset->setSizePolicy(sizePolicy1);

        GRP_listEx_Filters_LYT->addWidget(BTN_filtersReset, 1, 6, 1, 1);

        COMBO_exSubCat = new QComboBox(gridLayoutWidget);
        COMBO_exSubCat->setObjectName(QString::fromUtf8("COMBO_exSubCat"));
        sizePolicy.setHeightForWidth(COMBO_exSubCat->sizePolicy().hasHeightForWidth());
        COMBO_exSubCat->setSizePolicy(sizePolicy);

        GRP_listEx_Filters_LYT->addWidget(COMBO_exSubCat, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        GRP_listEx_Filters_LYT->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        GRP_listEx_Filters_LYT->addItem(horizontalSpacer_3, 1, 5, 1, 1);

        verticalLayoutWidget = new QWidget(list_exercises);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 130, 1221, 661));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        BTN_addEx = new QPushButton(verticalLayoutWidget);
        BTN_addEx->setObjectName(QString::fromUtf8("BTN_addEx"));
        sizePolicy1.setHeightForWidth(BTN_addEx->sizePolicy().hasHeightForWidth());
        BTN_addEx->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(BTN_addEx);

        LIST_listEx = new QTableView(verticalLayoutWidget);
        LIST_listEx->setObjectName(QString::fromUtf8("LIST_listEx"));

        verticalLayout->addWidget(LIST_listEx);


        retranslateUi(list_exercises);

        QMetaObject::connectSlotsByName(list_exercises);
    } // setupUi

    void retranslateUi(QDialog *list_exercises)
    {
        list_exercises->setWindowTitle(QCoreApplication::translate("list_exercises", "Dialog", nullptr));
        GRP_listEx_Filters->setTitle(QCoreApplication::translate("list_exercises", "Filters", nullptr));
        LBL_filtersCat->setText(QCoreApplication::translate("list_exercises", "Cat", nullptr));
        LBL_filtersGrouping->setText(QCoreApplication::translate("list_exercises", "Grouping", nullptr));
        LBL_filtersSubCat->setText(QCoreApplication::translate("list_exercises", "SubCat", nullptr));
        BTN_filtersReset->setText(QCoreApplication::translate("list_exercises", "Reset", nullptr));
        BTN_addEx->setText(QCoreApplication::translate("list_exercises", "Add Exercise", nullptr));
    } // retranslateUi

};

namespace Ui {
    class list_exercises: public Ui_list_exercises {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_EXERCISES_H
