#include "new_macro.h"
#include "ui_new_macro.h"
#include "editor_meso.h"

new_macro::new_macro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::new_macro)
{
    ui->setupUi(this);
}

new_macro::~new_macro()
{
    delete ui;
}

void new_macro::on_BTN_mesoAdd_clicked()
{
    editor_meso editor_meso;
    editor_meso.setModal(true);
    editor_meso.exec();
}
