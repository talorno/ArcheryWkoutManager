#include "db_connection.h"
#include <QtDebug>
#include <QSqlError>

db_connection::db_connection(QString hostname, QString dbname, QString username,  QString password){

    dbCon = QSqlDatabase::addDatabase("QMYSQL");
    dbCon.setHostName(hostname);
    dbCon.setDatabaseName("TrainingPlanV2");
    dbCon.setUserName("archery_manager");
    dbCon.setPassword("archery");
    //dbConState = dbCon.open();
    }

db_connection::db_connection(){

    dbCon = QSqlDatabase::addDatabase("QMYSQL");
    dbCon.setHostName("localhost");
    dbCon.setDatabaseName("TrainingPlanV2");
    dbCon.setUserName("archery_manager");
    dbCon.setPassword("archery");

    if(dbCon.open()){qDebug()<<"Database opened! - FROM DBCONNECTION CLASS";}
    else{qDebug() << dbCon.lastError().text();}

}

db_connection::~db_connection(){
    if (dbCon.isOpen())
        dbCon.close();
}
