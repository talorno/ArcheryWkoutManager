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
    editor_athlete(QString nickname, QWidget *parent = nullptr);
    ~editor_athlete();

private slots:
    void on_BTN_close_clicked();
    void insertAthlete(QString,QString,QString,QString,QDate,QString,int);

private:
    Ui::editor_athlete *athleteEditorUi;
    void populateClassComboBox();
    void populateDivisionComboBox();
    void pickDivisionComboBox(QString);
    void pickClassComboBox(QString);


};

#endif // EDITOR_ATHLETE_H
