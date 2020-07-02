#include "db_connection.h"


db_connection::db_connection(){

QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    dbCon.setHostName("localhost");
    dbCon.setDatabaseName("TrainingPlanV2");
    dbCon.setUserName("archery_manager");
    dbCon.setPassword("archery");
    dbConState = db.open();
    }
