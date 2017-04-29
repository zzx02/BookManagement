#ifndef ADMINCENTERDIALOG_H
#define ADMINCENTERDIALOG_H
#include "ui_admincenterdialog.h"
#include <QDialog>

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
private slots:
    void clearText();
};

#endif // ADMINCENTERDIALOG_H
