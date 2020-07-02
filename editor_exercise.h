#ifndef EDITOR_EXERCISE_H
#define EDITOR_EXERCISE_H

#include <QDialog>

namespace Ui {
class editor_exercise;
}

class editor_exercise : public QDialog
{
    Q_OBJECT

public:
    explicit editor_exercise(QWidget *parent = nullptr);
    ~editor_exercise();

private slots:
    void on_BTN_SaveEx_clicked();

private:
    Ui::editor_exercise *ui;
};

#endif // EDITOR_EXERCISE_H
