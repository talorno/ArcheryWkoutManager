#include "athlete.h"

athlete::athlete()
{

}
athlete::athlete(QString name, QString surname, QString nickname, QString division, QDate birthday, QString mail, qint8 isActive){
    this->setName(name);
    this->setSurname(surname);
    this->setNickname(nickname);
    this->setDivision(division);
    this->setBirthday(birthday);
    this->setMail(mail);
    this->setActive(isActive);
 }


void athlete::setName(QString name){
    this->name = name;
}
void athlete::setSurname(QString surname){
    this->surname = surname;
}
void athlete::setNickname(QString nickname){
    this->nickname = nickname;
}
void athlete::setDivision(QString division){
    this->division = division;
}
void athlete::setBirthday(QDate birthday){
    this->birthday = birthday;
}
void athlete::setMail(QString mail){
    this->mail = mail;
}
void athlete::setActive(qint8 state){
    this->isActive = state;
}


QString athlete::getName(){
    return this->name;
}
QString athlete::getSurname(){
    return this->surname;
}
QString athlete::getNickname(){
    return this->nickname;
}
QString athlete::getDivision(){
    return this->division;
}
QDate athlete::getBirthday(){
    return this->birthday;
}
QString athlete::getMail(){
    return this->mail;
}
qint8 athlete::getActive(){
    return this->isActive;
}

