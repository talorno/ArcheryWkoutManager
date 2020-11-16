#include "editor_exercise.h"
#include "ui_editor_exercise.h"
#include <QSqlQuery>
#include <QDebug>


editor_exercise::editor_exercise(QWidget *parent) :
    QDialog(parent),
    exEditor_ui(new Ui::editor_exercise)
{
    exEditor_ui->setupUi(this);
}

 editor_exercise::editor_exercise (QString exType, QString exSubType, QString exId, QWidget *parent) : QDialog(parent), exEditor_ui(new Ui::editor_exercise) {


    QSqlQuery exEditQuery;

    exEditQuery.exec("SELECT exs.exercisetype, exs.exercisesubtype, exs.exerciseid, description, groupage, unit, number, resttimemin,estimatedtimeforseriesmin,mission,target,exerciseTypeDescr, exerciseSubTypeDescr FROM t_sys_exercises exs JOIN t_sys_exercisetype extype ON exs.exerciseType = extype.exerciseType JOIN t_sys_exercisesubtype exsubtype ON exs.exerciseSubType = exSubtype.exerciseSubType WHERE extype.exercisetype = exsubtype.exercisetype AND exerciseSubTypeDescr = '"+exType+"' AND exerciseTypeDescr = '"+exSubType+"' AND exs.exerciseID = '"+exId+"';");


    exEditQuery.next();
    QString exDescription= exEditQuery.value(3).toString();
    QString groupage = exEditQuery.value(4).toString();
    QString unit = exEditQuery.value(5).toString();
    QString number = exEditQuery.value(6).toString();
    QString resttimemin = exEditQuery.value(7).toString();
    QString estimatedtimeforseriesmin = exEditQuery.value(8).toString();
    QString mission = exEditQuery.value(9).toString();
    QString target = exEditQuery.value(10).toString();
    QString exerciseTypeDescr = exEditQuery.value(11).toString();
    QString exerciseSubTypeDescr = exEditQuery.value(12).toString();


    exEditor_ui->setupUi(this);

    ui_PopulateComboExCat();
    ui_populateEditor(exType,exSubType,exId,exDescription,groupage,unit,number,resttimemin,estimatedtimeforseriesmin,mission,target,exerciseTypeDescr, exerciseSubTypeDescr);

}


editor_exercise::~editor_exercise()
{
    delete exEditor_ui;
}


void editor_exercise::ui_populateEditor(QString exType,QString exSubType, QString exId, QString exDescription, QString groupage, QString unit, QString number, QString resttimemin, QString estimatedtimeforseriesmin, QString mission, QString target, QString exerciseTypeDescr, QString exerciseSubTypeDescr){

    exEditor_ui->TXT_exDesc->setText(exDescription);
    exEditor_ui->TXT_exId->setText(exId);
    exEditor_ui->TXT_exMission->setText(mission);
    exEditor_ui->TXT_exTarget->setText(target);
    exEditor_ui->SPIN_exGrouping->setValue(groupage.toInt());
    exEditor_ui->SPIN_exRestTime->setValue(resttimemin.toInt());
    exEditor_ui->SPIN_exQty->setValue(number.toInt());
    exEditor_ui->SPIN_exExecTime->setValue(estimatedtimeforseriesmin.toInt());

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
