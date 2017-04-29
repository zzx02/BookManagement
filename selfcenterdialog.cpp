#include "selfcenterdialog.h"
#include "ui_selfcenterdialog.h"

Selfcenterdialog::Selfcenterdialog(QString username, QWidget *parent) :
    QDialog(parent), usrname(username)
{
    this->setupUi(this);
    QDateTime currenttime = QDateTime::currentDateTime();
    welcomeLabel -> setText("Welcome! " + usrname + " 当前日期： " + currenttime.toString("yyyy-MM-dd"));
    QString Filter = " username = '" + usrname + "'";
    model = new QSqlTableModel;
    db.showMyBook(Filter, model);
    view ->setModel(model);
    view->setColumnWidth(0, 80);
    view->setSelectionMode(QAbstractItemView::SingleSelection);
    view->setSelectionBehavior(QAbstractItemView::SelectRows);

    connect(closeButton, &QPushButton::clicked, this, &QDialog::close );
    connect(returnButton, &QPushButton::clicked, this, &Selfcenterdialog::returnBook);
    connect(continueButton, &QPushButton::clicked, this, &Selfcenterdialog::continueBorrow);
}

Selfcenterdialog::~Selfcenterdialog()
{
    delete ui;
}

void Selfcenterdialog::returnBook()
{
    int tmpindex = view->currentIndex().row();
    QSqlRecord currentRecord=model->record(tmpindex);
    QVariant currentData = currentRecord.value(0);
    db.ReturnBook(usrname, currentData);
    QMessageBox::information(this,tr("成功"),tr("归还成功"),QMessageBox::Yes);
    model = new QSqlTableModel;
    QString Filter = " username = '" + usrname + "'";
    db.showMyBook(Filter, model);
    view ->setModel(model);
    view->setColumnWidth(0, 80);
    view->setSelectionMode(QAbstractItemView::SingleSelection);
    view->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void Selfcenterdialog::continueBorrow()
{
    int tmpindex = view->currentIndex().row();
    QSqlRecord currentRecord=model->record(tmpindex);
    QVariant currentData = currentRecord.value(0);
    db.continueBorrow(usrname, currentData);
    QMessageBox::information(this,tr("成功"),tr("续借成功"),QMessageBox::Yes);
    model = new QSqlTableModel;
    QString Filter = " username = '" + usrname + "'";
    db.showMyBook(Filter, model);
    view ->setModel(model);
    view->setColumnWidth(0, 80);
    view->setSelectionMode(QAbstractItemView::SingleSelection);
    view->setSelectionBehavior(QAbstractItemView::SelectRows);
}
