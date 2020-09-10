#ifndef LIST_ATHLETES_H
#define LIST_ATHLETES_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QTableView>


namespace Ui {
class list_athletes;
}

class list_athletes : public QDialog
{
    Q_OBJECT

public:
    explicit list_athletes(QWidget *parent = nullptr);
    ~list_athletes();

private slots:
    void initializeModel(QSqlTableModel *model);

private:
    Ui::list_athletes *athletesUi;
    QSqlQuery getAthletesList();

};

#endif // LIST_ATHLETES_H
