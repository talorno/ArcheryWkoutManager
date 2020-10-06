#include "list_exercises.h"
#include "ui_list_exercises.h"
#include "editor_exercise.h"
#include <QDebug>

list_exercises::list_exercises(QWidget *parent) :
    QDialog(parent),
    exercisesUi(new Ui::list_exercises)
{
    exercisesUi->setupUi(this);
    currentCat ="ALL";
    currentSubCat = "ALL";
    ui_PopulateComboExCat();
    ui_PopulateExTable();
    exercisesUi->COMBO_exSubCat->setEnabled(false);




    connect(exercisesUi->LIST_listEx, &QAbstractItemView::doubleClicked, this, &list_exercises::tableDblClick);
}

void list_exercises::ui_PopulateExTable(){
    QSqlQueryModel *exercisesModel = new QSqlQueryModel;

    if(currentCat == "ALL" && currentSubCat == "ALL"){
        exercisesModel->setQuery("SELECT exerciseTypeDescr, description, unit, number, restTimeMIN, estimatedTimeForSeriesMIN, mission, target FROM TrainingPlanV2.T_Sys_Exercises  JOIN TrainingPlanV2.T_sys_ExerciseType ORDER BY TrainingPlanV2.T_sys_ExerciseType.exerciseType;");


    }
    else if(currentCat.isEmpty() == false && currentSubCat == "ALL"){

        exercisesModel->setQuery("SELECT exerciseTypeDescr, description, unit, number, restTimeMIN, estimatedTimeForSeriesMIN, mission, target FROM T_Sys_Exercises  JOIN T_sys_ExerciseType WHERE T_sys_Exercises.exerciseType = T_sys_ExerciseType.exerciseType AND exerciseTypeDescr = '"+currentCat+"' ORDER BY T_sys_ExerciseType.exerciseTypeDescr;");
        qDebug() << "case2 ->";
        qDebug() << "SELECT exerciseTypeDescr, description, unit, number, restTimeMIN, estimatedTimeForSeriesMIN, mission, target FROM T_Sys_Exercises  JOIN T_sys_ExerciseType WHERE T_sys_Exercises.exerciseType = T_sys_ExerciseType.exerciseType AND exerciseTypeDescr = '"+currentCat+"' ORDER BY T_sys_ExerciseType.exerciseTypeDescr;";

    }
    else if(currentCat.isEmpty() == false && currentSubCat.isEmpty() == false){

        exercisesModel->setQuery("SELECT exerciseTypeDescr, exerciseSubTypeDescr description, unit, number, restTimeMIN, estimatedTimeForSeriesMIN, mission, target FROM T_Sys_Exercises, T_sys_ExerciseSubType  JOIN T_sys_ExerciseType WHERE T_sys_Exercises.exerciseType = T_sys_ExerciseType.exerciseType AND exerciseTypeDescr = '"+currentCat+"'AND exerciseSubTypeDescr = '"+currentSubCat+"' ORDER BY T_sys_ExerciseType.exerciseTypeDescr;");

        qDebug() << "case3 ->";
        qDebug() << "SELECT exerciseTypeDescr, description, unit, number, restTimeMIN, estimatedTimeForSeriesMIN, mission, target FROM T_Sys_Exercises  JOIN T_sys_ExerciseType WHERE T_sys_Exercises.exerciseType = T_sys_ExerciseType.exerciseType AND exerciseTypeDescr = '"+currentCat+"' ORDER BY T_sys_ExerciseType.exerciseTypeDescr;";


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


void list_exercises::ui_PopulateComboExSubCat(){

    QSqlQueryModel *ComboExSubCatModel = new QSqlQueryModel;

    if(currentCat.isEmpty()== true){
            ComboExSubCatModel->setQuery("SELECT exerciseSubTypeDescr FROM T_sys_ExerciseType JOIN T_sys_ExerciseSubType WHERE T_sys_ExerciseSubType.exerciseType = T_sys_ExerciseType.exerciseType;");

    }
    else{
            ComboExSubCatModel->setQuery("SELECT exerciseSubTypeDescr FROM T_sys_ExerciseType JOIN T_sys_ExerciseSubType WHERE T_sys_ExerciseSubType.exerciseType = T_sys_ExerciseType.exerciseType AND T_sys_ExerciseType.exerciseTypeDescr='"+currentCat+"';");


}

    exercisesUi->COMBO_exSubCat->setModel(ComboExSubCatModel);
    int subCatWidth = exercisesUi->COMBO_exSubCat->minimumSizeHint().width();
    exercisesUi->COMBO_exSubCat->setMinimumWidth(subCatWidth);


}

void list_exercises::updateExList(){
    ui_PopulateExTable();
}

void list_exercises::on_COMBO_exCat_currentIndexChanged(const QString &arg1)
{
    currentCat = exercisesUi->COMBO_exCat->currentText();
    currentSubCat = "ALL";
    updateExList();
    ui_PopulateComboExSubCat();
    exercisesUi->COMBO_exSubCat->setEnabled(true);

}

void list_exercises::on_COMBO_exSubCat_currentIndexChanged(const QString &arg1)
{
    currentSubCat = exercisesUi->COMBO_exSubCat->currentText();
   updateExList();

}

void list_exercises::tableDblClick(QModelIndex index){
    qDebug() << index;
    int row = index.row();

    QString cat;
    QString subCat;

    cat = index.sibling(row, 0).data().toString();
    subCat = index.sibling(row, 1).data().toString();
    qDebug() << cat+" "+subCat;

}
