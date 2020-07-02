#ifndef EDITOR_MESO_H
#define EDITOR_MESO_H

#include <QDialog>

namespace Ui {
class editor_meso;
}

class editor_meso : public QDialog
{
    Q_OBJECT

public:
    explicit editor_meso(QWidget *parent = nullptr);
    ~editor_meso();

private slots:
    void on_BTN_closeEditor_clicked();

private:
    Ui::editor_meso *ui;
};

#endif // EDITOR_MESO_H
