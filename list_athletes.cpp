#include "list_athletes.h"
#include "ui_list_athletes.h"
#include "editor_athlete.h"
#include "athlete.h"
#include <QtDebug>



list_athletes::list_athletes(QWidget *parent) :
    QDialog(parent),
    athletesUi(new Ui::list_athletes)
{
    athletesUi->setupUi(this);
    QSqlQueryModel *athletesModel = new QSqlQueryModel;
    //athletesModel->setQuery("SELECT athleteName, athleteSurName, division, bornDate, mailAddress FROM TrainingPlanV2.T_cfg_Athletes;");

    athletesModel->setQuery("SELECT * FROM TrainingPlanV2.T_cfg_Athletes;");


    athletesModel->setHeaderData(1, Qt::Horizontal, tr("Nome"));
    athletesModel->setHeaderData(2, Qt::Horizontal, tr("Cognome"));
    athletesModel->setHeaderData(3, Qt::Horizontal, tr("Divisione"));
    athletesModel->setHeaderData(4, Qt::Horizontal, tr("Data Di Nascita"));
    athletesModel->setHeaderData(5, Qt::Horizontal, tr("Mail"));
    athletesUi->TBL_athletesList->setModel(athletesModel);
    athletesUi->TBL_athletesList->setColumnHidden(0,true);
    athletesUi->TBL_athletesList->setColumnHidden(6,true);
    athletesUi->TBL_athletesList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    athletesUi->TBL_athletesList->show();

    connect(athletesUi->TBL_athletesList, &QAbstractItemView::doubleClicked, this, &list_athletes::tableDblClick);
}


void list_athletes::initializeModel(QSqlTableModel *model)
{
    athletesUi->TBL_athletesList->setModel(model);
    athletesUi->TBL_athletesList->show();
    athletesSelectionModel = athletesUi->TBL_athletesList->selectionModel();
}


list_athletes::~list_athletes()
{
    delete athletesUi;
}

QSqlQuery list_athletes::getAthletesList(){
    QSqlQuery query;
    query.exec("SELECT * FROM TrainingPlanV2.T_cfg_Athletes;");
    return query;
}

void list_athletes::on_BTN_newAthlete_clicked()
{
    editor_athlete editor_athlete;
    editor_athlete.setModal(true);
    editor_athlete.exec();
}

void list_athletes::tableDblClick(QModelIndex index){
    QString name;
    QString surname;
    QString nickname;
    QString division;
    QString athlClass;
    QString mail;
    QDate birthday;
    qint8 isActive;

    int row = index.row();

    name = index.sibling(row, 1).data().toString();
    surname = index.sibling(row, 2).data().toString();
    nickname = index.sibling(row, 0).data().toString();
    //division = index.sibling(row, 4).data().toString();
    mail = index.sibling(row, 5).data().toString();
    birthday = index.sibling(row, 4).data().toDate();
    isActive = index.sibling(row, 6).data().toBool();

    qDebug() << index.sibling(row, 0).data().toString() +" "+ index.sibling(row, 1).data().toString() +" "+ index.sibling(row, 2).data().toString() +" "+ index.sibling(row, 3).data().toString() +" "+ index.sibling(row, 4).data().toString() +" "+index.sibling(row, 5).data().toString()+" "+index.sibling(row, 6).data().toString();


    athlete *athlToEdit = new athlete(name,surname,nickname,athlClass,division,birthday,mail,isActive);

    editor_athlete editor_athlete(athlToEdit, this);
    editor_athlete.setModal(true);
    editor_athlete.exec();

}

