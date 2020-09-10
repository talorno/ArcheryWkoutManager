#include "list_athletes.h"
#include "ui_list_athletes.h"



list_athletes::list_athletes(QWidget *parent) :
    QDialog(parent),
    athletesUi(new Ui::list_athletes)
{
    athletesUi->setupUi(this);
    QSqlQueryModel *athletesModel = new QSqlQueryModel;
    athletesModel->setQuery("SELECT athleteName, athleteSurName, division, bornDate, mailAddress FROM TrainingPlanV2.T_cfg_Athletes;");
    athletesModel->setHeaderData(0, Qt::Horizontal, tr("Nome"));
    athletesModel->setHeaderData(1, Qt::Horizontal, tr("Cognome"));
    athletesModel->setHeaderData(2, Qt::Horizontal, tr("Divisione"));
    athletesModel->setHeaderData(3, Qt::Horizontal, tr("Data Di Nascita"));
    athletesModel->setHeaderData(4, Qt::Horizontal, tr("Mail"));
    athletesUi->TBL_athletesList->setModel(athletesModel);
    athletesUi->TBL_athletesList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    athletesUi->TBL_athletesList->show();
}


void list_athletes::initializeModel(QSqlTableModel *model)
{
    athletesUi->TBL_athletesList->setModel(model);
    athletesUi->TBL_athletesList->show();
}


list_athletes::~list_athletes()
{
    delete athletesUi;
}

QSqlQuery list_athletes::getAthletesList(){
    QSqlQuery query;
    query.exec("SELECT * FROM TrainingPlanV2.`dbo.T_cfg_Athletes`;");
    return query;
}
