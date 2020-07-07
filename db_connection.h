#ifndef DB_CONNECTION_H
#define DB_CONNECTION_H
#include <QSql>
#include <QSqlDatabase>
#include <QObject>
#include <QMessageBox>
#include <QSqlQuery>

class db_connection
{
public:
    db_connection();
    db_connection(QString hostname, QString dbname, QString username,  QString password);
    ~db_connection();
    QString server; //server a cui connettersi
    QString userid; //nome utente
    QString password; //password
    QString port; //porta dove il ser   ver SQL è in ascolto
    QString dbName; //Nome del database da utilizzare
    QSqlDatabase dbCon;

private:


};

#endif // DB_CONNECTION_H
