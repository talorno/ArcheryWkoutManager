#include "db_connection.h"
#include <QtDebug>
#include <QSqlError>

db_connection::db_connection(QString hostname, QString dbname, QString username,  QString password){

QSqlDatabase dbCon_named = QSqlDatabase::addDatabase("QMYSQL");
    dbCon_named.setHostName(hostname);
    dbCon_named.setDatabaseName("TrainingPlanV2");
    dbCon_named.setUserName("archery_manager");
    dbCon_named.setPassword("archery");
    //dbConState = dbCon.open();
    }

db_connection::db_connection(){

    QSqlDatabase dbCon = QSqlDatabase::addDatabase("QMYSQL");
    dbCon.setHostName("localhost");
    dbCon.setDatabaseName("TrainingPlanV2");
    dbCon.setUserName("archery_manager");
    dbCon.setPassword("archery");
    qDebug() << QSqlDatabase::drivers();

    if(dbCon.open()){qDebug()<<"Database opened! - FROM DBCONNECTION CLASS";}
    else{qDebug() << dbCon.lastError().text();}

}

db_connection::~db_connection(){
    if (dbCon.isOpen())
        dbCon.close();
}
