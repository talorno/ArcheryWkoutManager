#include "manager_workout.h"
#include "ui_manager_workout.h"

manager_workout::manager_workout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manager_workout)
{
    ui->setupUi(this);
}

manager_workout::~manager_workout()
{
    delete ui;
}
