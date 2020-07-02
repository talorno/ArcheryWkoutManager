#include "workout_manager.h"
#include "ui_workout_manager.h"
#include "editor_meso.h"
#include "new_macro.h"

workout_manager::workout_manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::workout_manager)
{
    ui->setupUi(this);
}

workout_manager::~workout_manager()
{
    delete ui;
}

void workout_manager::on_BTN_meso_new_clicked()
{
    editor_meso editor_meso;
    editor_meso.setModal(true);
    editor_meso.exec();
}

void workout_manager::on_BTN_macro_new_clicked()
{
    new_macro new_macro;
    new_macro.setModal(true);
    new_macro.exec();

}
