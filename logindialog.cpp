#include "logindialog.h"
#include "database.h"
#include <QDebug>
#include<QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent)
{
    qDebug() << "Everything OK";
    this->setupUi(this);
    connect(buttonLogin, &QPushButton::clicked, this, &LoginDialog::Login_Attempt);
    connect(buttonReg, &QPushButton::clicked, this, &LoginDialog::Register);

}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::Login_Attempt()
{
    if (db.checkLogin(username->text().trimmed(),
                             password->text().trimmed()))
  {
      emit sendusername(username->text().trimmed() );
        accept();
  }
  else
  {
//      QTextCodec::setCodecForTr( QTextCodec::codecForName("GBK") );
      QMessageBox::warning(this,tr("警告"),tr("用户名或密码错误!"),QMessageBox::Yes);
      username->clear();
      password->clear();
      username->setFocus();
  }
}

void LoginDialog::Register()
{
    registerdialog reg;
    reg.exec();
}

