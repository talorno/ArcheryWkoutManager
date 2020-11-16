/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionConnect_to_Remote_DB;
    QAction *actionQuit;
    QWidget *centralwidget;
    QLabel *LBL_title;
    QLabel *LBL_logo;
    QWidget *gridLayoutWidget;
    QGridLayout *LYT_main;
    QPushButton *BTN_exManager;
    QPushButton *BTN_athlManager;
    QLabel *LBL_exManager;
    QLabel *LBL_athlManager;
    QPushButton *BTN_wkoutManager;
    QLabel *LBL_wkoutManager;
    QLabel *LBL_numWkouts;
    QLabel *LBL_numAthletes;
    QLabel *LBL_numEx;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 800);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1280, 800));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionConnect_to_Remote_DB = new QAction(MainWindow);
        actionConnect_to_Remote_DB->setObjectName(QString::fromUtf8("actionConnect_to_Remote_DB"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        LBL_title = new QLabel(centralwidget);
        LBL_title->setObjectName(QString::fromUtf8("LBL_title"));
        LBL_title->setGeometry(QRect(330, 10, 771, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Cantarell"));
        font.setPointSize(36);
        LBL_title->setFont(font);
        LBL_logo = new QLabel(centralwidget);
        LBL_logo->setObjectName(QString::fromUtf8("LBL_logo"));
        LBL_logo->setGeometry(QRect(780, 210, 461, 391));
        LBL_logo->setPixmap(QPixmap(QString::fromUtf8("GFX/bow-and-arrow.png")));
        LBL_logo->setScaledContents(true);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 100, 703, 622));
        LYT_main = new QGridLayout(gridLayoutWidget);
        LYT_main->setObjectName(QString::fromUtf8("LYT_main"));
        LYT_main->setContentsMargins(0, 0, 0, 0);
        BTN_exManager = new QPushButton(gridLayoutWidget);
        BTN_exManager->setObjectName(QString::fromUtf8("BTN_exManager"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BTN_exManager->sizePolicy().hasHeightForWidth());
        BTN_exManager->setSizePolicy(sizePolicy1);

        LYT_main->addWidget(BTN_exManager, 3, 0, 1, 1);

        BTN_athlManager = new QPushButton(gridLayoutWidget);
        BTN_athlManager->setObjectName(QString::fromUtf8("BTN_athlManager"));
        sizePolicy1.setHeightForWidth(BTN_athlManager->sizePolicy().hasHeightForWidth());
        BTN_athlManager->setSizePolicy(sizePolicy1);

        LYT_main->addWidget(BTN_athlManager, 2, 0, 1, 1);

        LBL_exManager = new QLabel(gridLayoutWidget);
        LBL_exManager->setObjectName(QString::fromUtf8("LBL_exManager"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Technic"));
        font1.setPointSize(10);
        LBL_exManager->setFont(font1);
        LBL_exManager->setStyleSheet(QString::fromUtf8(""));

        LYT_main->addWidget(LBL_exManager, 3, 2, 1, 1);

        LBL_athlManager = new QLabel(gridLayoutWidget);
        LBL_athlManager->setObjectName(QString::fromUtf8("LBL_athlManager"));
        LBL_athlManager->setFont(font1);

        LYT_main->addWidget(LBL_athlManager, 2, 2, 1, 1);

        BTN_wkoutManager = new QPushButton(gridLayoutWidget);
        BTN_wkoutManager->setObjectName(QString::fromUtf8("BTN_wkoutManager"));
        sizePolicy1.setHeightForWidth(BTN_wkoutManager->sizePolicy().hasHeightForWidth());
        BTN_wkoutManager->setSizePolicy(sizePolicy1);

        LYT_main->addWidget(BTN_wkoutManager, 0, 0, 1, 1);

        LBL_wkoutManager = new QLabel(gridLayoutWidget);
        LBL_wkoutManager->setObjectName(QString::fromUtf8("LBL_wkoutManager"));
        LBL_wkoutManager->setFont(font1);

        LYT_main->addWidget(LBL_wkoutManager, 0, 2, 1, 1);

        LBL_numWkouts = new QLabel(gridLayoutWidget);
        LBL_numWkouts->setObjectName(QString::fromUtf8("LBL_numWkouts"));

        LYT_main->addWidget(LBL_numWkouts, 0, 3, 1, 1);

        LBL_numAthletes = new QLabel(gridLayoutWidget);
        LBL_numAthletes->setObjectName(QString::fromUtf8("LBL_numAthletes"));

        LYT_main->addWidget(LBL_numAthletes, 2, 3, 1, 1);

        LBL_numEx = new QLabel(gridLayoutWidget);
        LBL_numEx->setObjectName(QString::fromUtf8("LBL_numEx"));

        LYT_main->addWidget(LBL_numEx, 3, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 27));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionConnect_to_Remote_DB);
        menuFile->addAction(actionQuit);
        menuAbout->addAction(actionHelp);
        menuAbout->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Archery Workout Manager v0.1", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionConnect_to_Remote_DB->setText(QCoreApplication::translate("MainWindow", "Connect to Remote DB", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        LBL_title->setText(QCoreApplication::translate("MainWindow", "Archery Workout Manager v0.1", nullptr));
        LBL_logo->setText(QString());
        BTN_exManager->setText(QCoreApplication::translate("MainWindow", "Gestione Esercizi", nullptr));
        BTN_athlManager->setText(QCoreApplication::translate("MainWindow", "Gestione Atleti", nullptr));
        LBL_exManager->setText(QCoreApplication::translate("MainWindow", "Esercizi Presenti:", nullptr));
        LBL_athlManager->setText(QCoreApplication::translate("MainWindow", "Atleti Presenti:", nullptr));
        BTN_wkoutManager->setText(QCoreApplication::translate("MainWindow", "Gestione Allenamenti", nullptr));
        LBL_wkoutManager->setText(QCoreApplication::translate("MainWindow", "Piani Allenamento Presenti: ", nullptr));
        LBL_numWkouts->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Numero Piani</p></body></html>", nullptr));
        LBL_numAthletes->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Numero Atleti</p></body></html>", nullptr));
        LBL_numEx->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Numero Esercizi</p></body></html>", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
