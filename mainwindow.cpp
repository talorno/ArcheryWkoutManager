#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "about.h"
#include "workout_manager.h"
#include "list_athletes.h"
#include "list_exercises.h"
#include "db_connection.h"
#include "QSqlDatabase"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->LBL_numAthletes->setText(QString::number(getNumAthletes()));
    ui->LBL_numWkouts->setText(QString::number(getNumWkouts()));
    ui->LBL_numEx->setText(QString::number(getNumExercises()));
    //db_connection* db = new db_connection();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BTN_wkoutManager_clicked()
{
    workout_manager wkout_manager;
    wkout_manager.setModal(true);
    wkout_manager.exec();
}

void MainWindow::on_BTN_athlManager_clicked()
{
    list_athletes list_athletes;
    list_athletes.setModal(true);
    list_athletes.exec();
}

void MainWindow::on_BTN_exManager_clicked()
{
    list_exercises list_exercises;
    list_exercises.setModal(true);
    list_exercises.exec();
}

void MainWindow::on_actionQuit_triggered()
{
    this->close();
}

void MainWindow::on_actionAbout_triggered()
{
    about about;
    about.exec();
}


qint8 MainWindow::getNumAthletes()
{
//ritorna numero atleti da db

    QSqlQuery query;
    QSqlDatabase db = QSqlDatabase::database();
    if(db.isOpen()) qDebug() << "Date:";

       query.exec("SELECT COUNT(*) FROM`dbo.T_cfg_Athletes`");
       query.first();
       return query.value(0).toInt();
       //return 0;

//return 69;

}

qint8 MainWindow::getNumWkouts()
{
//ritorna numero piani da db
    //query.exec("SELECT COUNT(*) FROM`dbo.T_cfg_Athletes`");
    return 69;
}

qint8 MainWindow::getNumExercises()
{
//ritorna numero esercizi da db
    return 69;
}
