#include "list_athletes.h"
#include "ui_list_athletes.h"



list_athletes::list_athletes(QWidget *parent) :
    QDialog(parent),
    athletesUi(new Ui::list_athletes)
{
    athletesUi->setupUi(this);

}


void list_athletes::initializeModel(QSqlTableModel *model)
{   /*ui->TBL_athletesList->setModel(model);*/
    athletesUi->TBL_athletesList->setEditTriggers(QAbstractItemView::NoEditTriggers);
//    model->setTable("person");
//    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
//    model->select();

//    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
//    model->setHeaderData(1, Qt::Horizontal, QObject::tr("First name"));
//    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Last name"));
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

void list_athletes::on_pushButton_clicked()
{
//chiamata a finestra aggiunta atleta
}
