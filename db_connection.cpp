#include "db_connection.h"


db_connection::db_connection(QString hostname, QString dbname, QString username,  QString password){

QSqlDatabase dbCon = QSqlDatabase::addDatabase("QMYSQL");
    dbCon.setHostName(hostname);
    dbCon.setDatabaseName("TrainingPlanV2");
    dbCon.setUserName("archery_manager");
    dbCon.setPassword("archery");
    //dbConState = dbCon.open();
    }

db_connection::db_connection(){

QSqlDatabase dbCon = QSqlDatabase::addDatabase("QMYSQL");
    dbCon.setHostName("localhost");
    dbCon.setDatabaseName("TrainingPlanV2");
    dbCon.setUserName("archery_manager");
    dbCon.setPassword("archery");
    dbConState = dbCon.open();
    }
