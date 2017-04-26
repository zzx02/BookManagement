#include "registerdialog.h"
#include "ui_registerdialog.h"

registerdialog::registerdialog(QWidget *parent) :
    QDialog(parent)
{
    this->setupUi(this);
    connect(this->buttonConfirm, &QPushButton::clicked, this, &registerdialog::insertion);
    connect(this->buttonCancel, &QPushButton::clicked, this, &registerdialog::close);
}

registerdialog::~registerdialog()
{
    //delete ui;
}

void registerdialog::insertion()
{
    if (username->text().trimmed() == "admin") {
        QMessageBox::warning(this,tr("警告"),tr("不能注册管理员账号"),QMessageBox::Yes);
        this->username->clear();
        this->password->clear();\
        this->lineEdit_3->clear();
        this->department->clear();
    }
    else if (username->text().trimmed() == "") {
        QMessageBox::warning(this,tr("警告"),tr("用户名不能为空"),QMessageBox::Yes);
        this->username->clear();
        this->password->clear();\
        this->lineEdit_3->clear();
        this->department->clear();
    }
    else if (!db.checkUsernameValid(username->text().trimmed())) {
        QMessageBox::warning(this,tr("警告"),tr("用户名已被注册"),QMessageBox::Yes);
        this->username->clear();
        this->password->clear();\
        this->lineEdit_3->clear();
        this->department->clear();
    }
    else if (password->text().trimmed() != lineEdit_3->text().trimmed()){
        QMessageBox::warning(this,tr("警告"),tr("两次密码输入不一致"),QMessageBox::Yes);
        this->username->clear();
        this->password->clear();\
        this->lineEdit_3->clear();
        this->department->clear();
    }
    else
    {
        if (db.createUser(username->text().trimmed(), password->text().trimmed(), department->text().trimmed()))
        {
            QMessageBox::information(this,tr("成功"),tr("注册成功"),QMessageBox::Yes);
            this->username->clear();
            this->password->clear();\
            this->lineEdit_3->clear();
            this->department->clear();
        }
    this->close();
    }
}

