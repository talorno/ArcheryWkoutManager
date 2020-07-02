#ifndef WORKOUT_MANAGER_H
#define WORKOUT_MANAGER_H

#include <QDialog>

namespace Ui {
class workout_manager;
}

class workout_manager : public QDialog
{
    Q_OBJECT

public:
    explicit workout_manager(QWidget *parent = nullptr);
    ~workout_manager();

private slots:
    void on_BTN_meso_new_clicked();

    void on_BTN_macro_new_clicked();

private:
    Ui::workout_manager *ui;
};

#endif // WORKOUT_MANAGER_H
