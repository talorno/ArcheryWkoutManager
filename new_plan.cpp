#include "new_plan.h"
#include "ui_new_plan.h"

new_plan::new_plan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::new_plan)
{
    ui->setupUi(this);
}

new_plan::~new_plan()
{
    delete ui;
}
