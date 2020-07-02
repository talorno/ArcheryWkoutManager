#ifndef NEW_MACRO_H
#define NEW_MACRO_H

#include <QDialog>

namespace Ui {
class new_macro;
}

class new_macro : public QDialog
{
    Q_OBJECT

public:
    explicit new_macro(QWidget *parent = nullptr);
    ~new_macro();

private slots:
    void on_BTN_mesoAdd_clicked();

private:
    Ui::new_macro *ui;
};

#endif // NEW_MACRO_H
