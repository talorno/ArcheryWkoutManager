#ifndef EDITOR_EXERCISE_H
#define EDITOR_EXERCISE_H

#include <QDialog>
#include <QSqlQueryModel>
#include <QTableView>

namespace Ui {
class editor_exercise;
}

class editor_exercise : public QDialog
{
    Q_OBJECT

public:
    explicit editor_exercise(QWidget *parent = nullptr);
    editor_exercise(QString exType, QString exSubType, QString id, QWidget *parent);
    ~editor_exercise();

private slots:
    void on_BTN_SaveEx_clicked();

private:
    Ui::editor_exercise *exEditor_ui;
    void ui_populateEditor(QString exType,QString exSubType, QString exId, QString exDescription, QString groupage, QString unit, QString number, QString resttimemin, QString estimatedtimeforseriesmin, QString mission, QString target, QString exerciseTypeDescr, QString exerciseSubTypeDescr);
    void ui_PopulateComboExCat();
};

#endif // EDITOR_EXERCISE_H
