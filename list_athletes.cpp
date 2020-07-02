#include "list_athletes.h"
#include "ui_list_athletes.h"


list_athletes::list_athletes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::list_athletes)
{
    ui->setupUi(this);
}

list_athletes::~list_athletes()
{
    delete ui;
}

QSqlQuery list_athletes::getAthletesList(){
    QSqlQuery query;
      query.exec("SELECT name, salary FROM employee WHERE salary > 50000");
    return query;
}

void list_athletes::on_pushButton_clicked()
{
//chiamata a finestra aggiunta atleta
}
