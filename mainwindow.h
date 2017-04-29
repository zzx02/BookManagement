#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "selfcenterdialog.h"
#include "ui_mainwindow.h"
#include "database.h"
#include <QMainWindow>
#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow, public Ui_MainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QDialog* logindialog, QWidget *parent = 0);
    ~MainWindow();

public slots:
    void SetUsername(QString LoginUsername);
private:
    //Ui::MainWindow *ui;
    database db;
    QSqlTableModel *mytable;
    QString username;
    QDialog* login;

private slots:
    void searchBook();
    void clearText();
    void updateBorrow();
    void OpenManage();
};

#endif // MAINWINDOW_H
