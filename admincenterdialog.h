#ifndef ADMINCENTERDIALOG_H
#define ADMINCENTERDIALOG_H
#include "database.h"
#include "ui_admincenterdialog.h"
#include <QDialog>
#include <QFileDialog>
namespace Ui {
class AdminCenterdialog;
}

class AdminCenterdialog : public QDialog, public Ui_AdminCenterdialog
{
    Q_OBJECT

public:
    explicit AdminCenterdialog(QWidget *parent = 0);
    ~AdminCenterdialog();

private:
    Ui::AdminCenterdialog *ui;
    database db;
    QSqlTableModel* model_users, *model_books, *model_tobeinsert, *model_userown;
    int currentRow = 0;

private slots:
    void clearText();
    void showdetails();
    void searchBook();
    void deleteBook();
    void Singlebook();
    void Refresh();
    void Multibook();
    void UserDelete();
};

#endif // ADMINCENTERDIALOG_H
