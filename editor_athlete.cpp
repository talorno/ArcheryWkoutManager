#include "editor_athlete.h"
#include "ui_editor_athlete.h"

editor_athlete::editor_athlete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editor_athlete)
{
    ui->setupUi(this);
}

editor_athlete::~editor_athlete()
{
    delete ui;
}

void editor_athlete::on_BTN_close_clicked()
{
    editor_athlete::close();
}
