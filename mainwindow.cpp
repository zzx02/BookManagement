#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "database.h"
#include <QMessageBox>
#include <QDebug>
#include <QDateTime>
using namespace std;

MainWindow::MainWindow(QDialog* logindialog, QWidget *parent) :
    QMainWindow(parent), login(logindialog)
{
    this->setupUi(this);
//    mytable = new QSqlTableModel;
//    db.showSelect("", mytable);
//    view ->setModel(mytable);
     connect(checkButton, &QPushButton::clicked, this, &MainWindow::searchBook);
     connect(clearButton, &QPushButton::clicked, this, &MainWindow::clearText);
     connect(borrowButton, &QPushButton::clicked, this, &MainWindow::updateBorrow );
     connect(login, SIGNAL(sendusername(QString )), this, SLOT(SetUsername(QString )));

}

MainWindow::~MainWindow()
{
    delete mytable;
}


void MainWindow::searchBook()
{
    QString Filter;
    Filter = "category like '%" + nameCategory->text() + "%' and "
            + "title like '%" + nameBook->text() + "%' and "
            + "author like '%" + nameAuthor->text() + "%' and "
            + "press like '%" + namePublisher->text() + "%'";
    // qDebug() << Filter;
    mytable = new QSqlTableModel;
    db.showSelect(Filter, mytable);
    view -> setModel(mytable);
//    view->resizeColumnsToContents();
    view->setSelectionMode(QAbstractItemView::SingleSelection);
    view->setSelectionBehavior(QAbstractItemView::SelectRows);
    view->setColumnWidth(0, 80);
    view->setColumnWidth(1, 100);
    view->setColumnWidth(2, 100);
    view->setColumnWidth(3, 80);
    view->setColumnWidth(4, 80);
    view->setColumnWidth(5, 80);
    view->setColumnWidth(6, 80);
    view->setColumnWidth(7, 40);
    view->setColumnWidth(8, 40);
    if (mytable->rowCount() == 0)
        QMessageBox::information(this,tr("注意"),tr("暂未能查询到您所需要的书籍"),QMessageBox::Yes);
}


void MainWindow::clearText()
{
    nameCategory->clear();
    nameAuthor->clear();
    nameBook->clear();
    namePublisher->clear();
    price1->clear();
    price2->clear();
    return ;
}

void MainWindow::SetUsername(QString LoginUsername)
{
    QDateTime currenttime = QDateTime::currentDateTime();
    username = LoginUsername;
    usernameLabel->setText("用户: " + username);
    if (username != "admin")
        conditionLabel->setText("状态：普通用户");
    else
        conditionLabel->setText("状态：管理员");
    timeLabel -> setText("时间: " + currenttime.toString("yyyy-MM-dd"));
}

void MainWindow::updateBorrow()
{
    int tmpindex = view->currentIndex().row();
    QSqlRecord currentRecord=mytable->record(tmpindex);
    QVariant currentData = currentRecord.value(0);
    if (currentRecord.value(7) == 0)
         QMessageBox::information(this,tr("注意"),tr("本书已无库存"),QMessageBox::Yes);
    else if (db.borrowbook(currentData, username))
    {
         QMessageBox::information(this,tr("成功"),tr("借书成功"),QMessageBox::Yes);
    }
    else QMessageBox::information(this,tr("注意"),tr("借书失败"),QMessageBox::Yes);
    searchBook();
}
