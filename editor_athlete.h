#ifndef EDITOR_ATHLETE_H
#define EDITOR_ATHLETE_H

#include <QDialog>
#include <athlete.h>
#include <QSqlQueryModel>
#include <QTableView>

namespace Ui {
class editor_athlete;
}

class editor_athlete : public QDialog
{
    Q_OBJECT

public:
    explicit editor_athlete(QWidget *parent = nullptr);
    editor_athlete(athlete *athlete, QWidget *parent = nullptr);
    ~editor_athlete();

private slots:
    void on_BTN_close_clicked();

private:
    Ui::editor_athlete *athleteEditorUi;
    void populateClassComboBox();
    void populateDivisionComboBox();

};

#endif // EDITOR_ATHLETE_H
