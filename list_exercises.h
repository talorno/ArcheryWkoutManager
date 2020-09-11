#ifndef LIST_EXERCISES_H
#define LIST_EXERCISES_H

#include <QDialog>
#include <QSqlQueryModel>
#include <QTableView>

namespace Ui {
class list_exercises;
}

class list_exercises : public QDialog
{
    Q_OBJECT

public:
    explicit list_exercises(QWidget *parent = nullptr);
    ~list_exercises();

private slots:
    void on_BTN_addEx_clicked();
    void ui_PopulateComboExCat();
    void ui_PopulateComboExSubCat();
    void ui_PopulateExTable();
    void on_COMBO_exCat_currentIndexChanged(const QString &arg1);
    void on_COMBO_exSubCat_currentIndexChanged(const QString &arg1);



private:
    Ui::list_exercises *exercisesUi;
    QString currentCat;
    QString currentSubCat;
    void updateExList();
};

#endif // LIST_EXERCISES_H
