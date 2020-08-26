#ifndef LIST_EXERCISES_H
#define LIST_EXERCISES_H

#include <QDialog>

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

private:
    Ui::list_exercises *ui;
    void populateTable();
};

#endif // LIST_EXERCISES_H
