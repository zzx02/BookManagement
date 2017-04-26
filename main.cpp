#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << "Everything OK";
    MainWindow w;
    LoginDialog login;
    if (login.exec() == QDialog::Accepted)
    {

        w.show();
        return a.exec();
    }
    else return a.exec();
}
