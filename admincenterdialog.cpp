#include "admincenterdialog.h"
#include "ui_admincenterdialog.h"

AdminCenterdialog::AdminCenterdialog(QWidget *parent) :
    QDialog(parent)
{
    this->setupUi(this);
    connect(clear, &QPushButton::clicked, this, &AdminCenterdialog::clearText );
}

AdminCenterdialog::~AdminCenterdialog()
{
    delete ui;
}


void AdminCenterdialog::clearText()
{
    category->clear();
    author->clear();
    bookno->clear();
    publisher->clear();
    price->clear();
    year->clear();
    lineBookno->clear();
    count->clear();
    title->clear();

    return ;
}
