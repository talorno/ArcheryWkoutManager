#include "editor_exercise.h"
#include "ui_editor_exercise.h"

editor_exercise::editor_exercise(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editor_exercise)
{
    ui->setupUi(this);
}

editor_exercise::~editor_exercise()
{
    delete ui;
}

void editor_exercise::on_BTN_SaveEx_clicked()
{
    this->close();
}
