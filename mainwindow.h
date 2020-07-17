#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //db_connection* db ;
    QSqlDatabase dbCon;
    //QSqlDatabase dbase;


private slots:
    void on_BTN_wkoutManager_clicked();

    void on_BTN_athlManager_clicked();

    void on_BTN_exManager_clicked();

    void on_actionQuit_triggered();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    qint8 getNumAthletes();
    qint8 getNumWkouts();
    qint8 getNumExercises();
    int connectDb();


};
#endif // MAINWINDOW_H
