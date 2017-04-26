#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "database.h"

#include <QDebug>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->setupUi(this);
     connect(checkButton, &QPushButton::clicked, this, &MainWindow::searchBook);
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
    qDebug() << Filter;
    mytable = new QSqlTableModel;
    db.showSelect(Filter, mytable);
    view -> setModel(mytable);
}
