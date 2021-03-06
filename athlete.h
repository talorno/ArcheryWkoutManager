#ifndef ATHLETE_H
#define ATHLETE_H

#include <QDate>

class athlete
{



public:
    athlete();
    athlete(QString nickname);
    athlete(QString name, QString surname, QString nickname, QString athlClass, QString division, QDate birthday, QString mail, qint8 isActive);


    void setName(QString);
    void setSurname(QString);
    void setNickname(QString);
    void setClass(QString);
    void setDivision(QString);
    void setBirthday(QDate);
    void setMail(QString);
    void setActive(qint8);

    QString getName();
    QString getSurname();
    QString getNickname();
    QString getClass();
    QString getDivision();
    QDate getBirthday();
    QString getMail();
    qint8 getActive();



private:
    QString name;
    QString surname;
    QString nickname;
    QString athlClass;
    QString division;
    QDate birthday;
    QString mail;
    qint8   isActive;


};

#endif // ATHLETE_H
