#ifndef SELFCENTERDIALOG_H
#define SELFCENTERDIALOG_H

#include "ui_selfcenterdialog.h"
#include "database.h"
#include <QDialog>

namespace Ui {
class Selfcenterdialog;
}

class Selfcenterdialog : public QDialog, public Ui_Selfcenterdialog
{
    Q_OBJECT

public:
    explicit Selfcenterdialog(QString username, QWidget *parent = 0);
    ~Selfcenterdialog();

private:
    Ui::Selfcenterdialog *ui;
    QString usrname;
    database db;
    QSqlTableModel* model;
private slots:

    void returnBook();
    void continueBorrow();
};

#endif // SELFCENTERDIALOG_H
