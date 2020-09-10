#include "list_exercises.h"
#include "ui_list_exercises.h"
#include "editor_exercise.h"
#include <QDebug>

list_exercises::list_exercises(QWidget *parent) :
    QDialog(parent),
    exercisesUi(new Ui::list_exercises)
{
    exercisesUi->setupUi(this);
    ui_PopulateComboExCat();
    ui_PopulateComboExSubCat(NULL);
    ui_PopulateExTable(NULL,NULL);


}

void list_exercises::ui_PopulateExTable(QString cat, QString subCat){
    QSqlQueryModel *exercisesModel = new QSqlQueryModel;

    if(cat.isEmpty() == true && subCat.isEmpty() == true){
        exercisesModel->setQuery("SELECT exerciseTypeDescr, description, unit, number, restTimeMIN, estimatedTimeForSeriesMIN, mission, target FROM TrainingPlanV2.T_Sys_Exercises  JOIN TrainingPlanV2.T_sys_ExerciseType ORDER BY TrainingPlanV2.T_sys_ExerciseType.exerciseType;");
    }
    else if(cat.isEmpty() == false){
        exercisesModel->setQuery("SELECT exerciseTypeDescr, description, unit, number, restTimeMIN, estimatedTimeForSeriesMIN, mission, target FROM TrainingPlanV2.T_Sys_Exercises  JOIN TrainingPlanV2.T_sys_ExerciseType WHERE exerciseType = ORDER BY TrainingPlanV2.T_sys_ExerciseType.exerciseType;");
    }
    exercisesModel->setHeaderData(0, Qt::Horizontal, tr("Tipo Esercizio"));
    exercisesModel->setHeaderData(1, Qt::Horizontal, tr("Descrizione"));
    exercisesModel->setHeaderData(2, Qt::Horizontal, tr("Unità"));
    exercisesModel->setHeaderData(3, Qt::Horizontal, tr("Quantità"));
    exercisesModel->setHeaderData(4, Qt::Horizontal, tr("Tempo di Riposo"));
    exercisesModel->setHeaderData(5, Qt::Horizontal, tr("Tempo Stimato (MIN)"));
    exercisesModel->setHeaderData(6, Qt::Horizontal, tr("Mission"));
    exercisesModel->setHeaderData(7, Qt::Horizontal, tr("Obiettivo"));
    exercisesUi->LIST_listEx->setModel(exercisesModel);
    exercisesUi->LIST_listEx->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    exercisesUi->LIST_listEx->show();
}


list_exercises::~list_exercises()
{
    delete exercisesUi;
}

void list_exercises::on_BTN_addEx_clicked()
{
    editor_exercise editor_exercise;
    editor_exercise.setModal(true);
    editor_exercise.exec();
}

void list_exercises::ui_PopulateComboExCat(){

    QSqlQueryModel *ComboExCatModel = new QSqlQueryModel;

    ComboExCatModel->setQuery("SELECT exerciseTypeDescr FROM TrainingPlanV2.T_sys_ExerciseType;");

    exercisesUi->COMBO_exCat->setModel(ComboExCatModel);
    int catWidth = exercisesUi->COMBO_exCat->minimumSizeHint().width();
    exercisesUi->COMBO_exCat->setMinimumWidth(catWidth);

}


void list_exercises::ui_PopulateComboExSubCat(QString subCat){

    QSqlQueryModel *ComboExSubCatModel = new QSqlQueryModel;
    ComboExSubCatModel->setQuery("SELECT exerciseSubTypeDescription FROM TrainingPlanV2.T_sys_ExerciseSubType;");
    exercisesUi->COMBO_exSubCat->setModel(ComboExSubCatModel);
    int subCatWidth = exercisesUi->COMBO_exSubCat->minimumSizeHint().width();
    exercisesUi->COMBO_exSubCat->setMinimumWidth(subCatWidth);

}


void list_exercises::on_COMBO_exCat_currentIndexChanged(const QString &arg1)
{

    qDebug()<< exercisesUi->COMBO_exCat->currentText();

}

void list_exercises::on_COMBO_exSubCat_currentIndexChanged(const QString &arg1)
{

    qDebug()<< exercisesUi->COMBO_exSubCat->currentText();
}
