#ifndef NEW_PLAN_H
#define NEW_PLAN_H

#include <QDialog>

namespace Ui {
class new_plan;
}

class new_plan : public QDialog
{
    Q_OBJECT

public:
    explicit new_plan(QWidget *parent = nullptr);
    ~new_plan();

private:
    Ui::new_plan *ui;
};

#endif // NEW_PLAN_H
