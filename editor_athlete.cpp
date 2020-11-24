#include "editor_athlete.h"
#include "ui_editor_athlete.h"
#include "athlete.h"
#include <QSqlQuery>
#include <QFile>
#include <QByteArray>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>



editor_athlete::editor_athlete(QWidget *parent) :
    QDialog(parent),
    athleteEditorUi(new Ui::editor_athlete)
{
    athleteEditorUi->setupUi(this);
    populateClassComboBox();
    populateDivisionComboBox();


}

editor_athlete::editor_athlete(QString nickname, QWidget *parent) :
    QDialog(parent),
    athleteEditorUi(new Ui::editor_athlete)
{
    athleteEditorUi->setupUi(this);

    populateDivisionComboBox();
    populateClassComboBox();

    QSqlQuery athlToEditQRY;

    athlToEditQRY.exec("SELECT athleteNickName, athleteName, athleteSurName, division, bornDate, mailAddress, isActive,athleteImage FROM T_cfg_Athletes WHERE athleteNickName='"+nickname+"';");

    athlToEditQRY.first();


    athleteEditorUi->TXT_nick->setText(athlToEditQRY.value(0).toString());
    athleteEditorUi->TXT_name->setText(athlToEditQRY.value(1).toString());
    athleteEditorUi->TXT_surname->setText(athlToEditQRY.value(2).toString());
    athleteEditorUi->TXT_email->setText(athlToEditQRY.value(5).toString());
    athleteEditorUi->DATE_birthday->setDate(athlToEditQRY.value(4).toDate());
    athleteEditorUi->BOX_CHECK_isAthlActive->setChecked(athlToEditQRY.value(6).toBool());
    //athleteEditorUi->LBL_athlPicture->setPixmap()

}


void editor_athlete::insertAthlete(QString nick, QString name, QString surname,QString division, QDate borndate,QString mailAddress,int isActive){
    QSqlQuery athlToInsertQRY;
    QString testdate = borndate.toString();
    athlToInsertQRY.exec("INSERT INTO T_cfg_Athletes (athleteNickName, athleteName, athleteSurName, division, bornDate, mailAddress, isActive) VALUES ('"+nick+"','"+name+"','"+surname+"','"+division+"','"+testdate+"','"+mailAddress+"','"+isActive+"');");
                                                                                                                                                           };

void editor_athlete::updateAthlete(QString nick, QString name, QString surname,QString division, QDate bornDate, QString mailAddress,int isActive){
    QSqlQuery athlToUpdateQRY;

     athlToUpdateQRY.exec("UPDATE T_cfg_Athletes set athleteName = '"+name.txoStdString()+"', athleteSurName = '"+surname+"', division = '"+division.toStdString()+"', bornDate = '"+bornDate+"', mailAddress =  '"+mailAddress.toStdString()+"', isActive = '"+isActive+"' WHERE T_cfg_Athletes.athleteNickName = '"+nick+"'" ;);                                                                                                                               }


editor_athlete::~editor_athlete()
{
    delete athleteEditorUi;
}

void editor_athlete::on_BTN_close_clicked()
{
    editor_athlete::close();
}


void editor_athlete::populateClassComboBox(){
    QSqlQueryModel *ClassBoxModel = new QSqlQueryModel;

    ClassBoxModel->setQuery("SELECT class FROM T_Sys_Classes;");
    athleteEditorUi->COMBO_class->setModel(ClassBoxModel);

}

void editor_athlete::populateDivisionComboBox(){
    QSqlQueryModel *DivBoxModel = new QSqlQueryModel;

    DivBoxModel->setQuery("SELECT divisionDescr FROM T_sys_Divisions;");
    athleteEditorUi->COMBO_division->setModel(DivBoxModel);

}

void editor_athlete::pickDivisionComboBox(QString div){

}
void editor_athlete::pickClassComboBox(QString bowClass){

}

void editor_athlete::loadAthletePic(QString nickname){
    QByteArray imgByteBuffer;
    QString fileName = QFileDialog::getOpenFileName(this,tr("Load Image"), "", tr("Images (*.jpg);;Images (*.png)"));
    if (fileName.isEmpty())return;
       else {
           QFile file(fileName);
           if (!file.open(QIODevice::ReadOnly)) {
               QMessageBox::information(this, tr("Unable to open file"),
                   file.errorString());
               return;
           }
           else{
                QByteArray imgByteBuffer = file.readAll();
                file.close();
                QSqlQuery query;

                query.prepare("UPDATE T_cfg_Athletes(athleteImage) VALUES (:imgByteBuffer) WHERE athleteNickName="+nickname+"");
                query.bindValue(":imgByteBuffer", imgByteBuffer);
                    if( !query.exec()){
                        qDebug() << "Error inserting image into table:\n" << query.lastError().text();
                        QMessageBox :: critical(this,"Error","Couldn't insert data");
                    }
                    else{
                        QMessageBox :: information(this,"Save","Data Inserted successfully", QMessageBox ::Ok);
                    }

           }
       }
                                    }
void editor_athlete::on_BTN_loadPicture_clicked(){
    loadAthletePic(athleteEditorUi->TXT_nick->toPlainText());

    //come gli dico di prendere il nickname dell'utente attualmente in edit in maniera più elegante?
}


