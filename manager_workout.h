#ifndef MANAGER_WORKOUT_H
#define MANAGER_WORKOUT_H

#include <QDialog>

namespace Ui {
class manager_workout;
}

class manager_workout : public QDialog
{
    Q_OBJECT

public:
    explicit manager_workout(QWidget *parent = nullptr);
    ~manager_workout();

private:
    Ui::manager_workout *ui;
};

#endif // MANAGER_WORKOUT_H
