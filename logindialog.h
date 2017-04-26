#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include "ui_logindialog.h"
#include "database.h"
#include "registerdialog.h"

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private:
    Ui::LoginDialog *ui;
    database db;

private slots:
   void Login_Attempt();
   void Register();
};

#endif // LOGINDIALOG_H
