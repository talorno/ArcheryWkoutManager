#include "editor_exercise.h"
#include "ui_editor_exercise.h"


editor_exercise::editor_exercise(QWidget *parent) :
    QDialog(parent),
    exEditor_ui(new Ui::editor_exercise)
{
    exEditor_ui->setupUi(this);
    ui_PopulateComboExCat();
}

editor_exercise::~editor_exercise()
{
    delete exEditor_ui;
}


void editor_exercise::ui_PopulateComboExCat(){

                QSqlQueryModel *ComboExCatModel = new QSqlQueryModel;
                ComboExCatModel->setQuery("SELECT exerciseTypeDescr FROM TrainingPlanV2.T_sys_ExerciseType;");
                exEditor_ui->COMBO_exCat->setModel(ComboExCatModel);
                QSqlQueryModel *ComboExSubCatModel = new QSqlQueryModel;
                ComboExSubCatModel->setQuery("SELECT exerciseSubTypeDescr FROM TrainingPlanV2.T_sys_ExerciseSubType;");
                exEditor_ui->COMBO_exSubCat->setModel(ComboExSubCatModel);
                int catWidth = exEditor_ui->COMBO_exCat->minimumSizeHint().width();
                exEditor_ui->COMBO_exCat->setMinimumWidth(catWidth);

                int subCatWidth = exEditor_ui->COMBO_exSubCat->minimumSizeHint().width();
                exEditor_ui->COMBO_exSubCat->setMinimumWidth(subCatWidth);

}
void editor_exercise::on_BTN_SaveEx_clicked()
{
    this->close();
}
