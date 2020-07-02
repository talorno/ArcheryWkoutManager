#include "editor_meso.h"
#include "ui_editor_meso.h"

editor_meso::editor_meso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editor_meso)
{
    ui->setupUi(this);
}

editor_meso::~editor_meso()
{
    delete ui;
}

void editor_meso::on_BTN_closeEditor_clicked()
{
    this->close();
}
