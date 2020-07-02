#include "list_exercises.h"
#include "ui_list_exercises.h"
#include "editor_exercise.h"

list_exercises::list_exercises(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::list_exercises)
{
    ui->setupUi(this);
}

list_exercises::~list_exercises()
{
    delete ui;
}

void list_exercises::on_BTN_addEx_clicked()
{
    editor_exercise editor_exercise;
    editor_exercise.setModal(true);
    editor_exercise.exec();
}
