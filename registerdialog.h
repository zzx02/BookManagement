#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H
#include "database.h"
#include <QDialog>
#include "ui_registerdialog.h"
namespace Ui {
class registerdialog;
}

class registerdialog : public QDialog, public Ui_Dialog
{
    Q_OBJECT

public:
    explicit registerdialog(QWidget *parent = 0);
    ~registerdialog();


private:
   // Ui::registerdialog *ui;
    database db;
    void insertion();
};

#endif // REGISTERDIALOG_H
