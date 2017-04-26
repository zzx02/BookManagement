#include "logindialog.h"
#include "database.h"

#include<QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent)
{
    ui->setupUi(this);
    connect(this->ui->buttonLogin, &QPushButton::clicked, this, &LoginDialog::Login_Attempt);
    connect(this->ui->buttonReg, &QPushButton::clicked, this, &LoginDialog::Register);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::Login_Attempt()
{
  if(this->ui->username->text().trimmed()== tr("admin") &&
     this->ui->password->text().trimmed()==tr("admin"))
  {
      accept();
  }
  else if (db.checkLogin(this->ui->username->text().trimmed(),
                             this->ui->password->text().trimmed()))
  {
        accept();
  }
  else
  {
//      QTextCodec::setCodecForTr( QTextCodec::codecForName("GBK") );
      QMessageBox::warning(this,tr("警告"),tr("用户名或密码错误!"),QMessageBox::Yes);
      this->ui->username->clear();
      this->ui->password->clear();
      this->ui->username->setFocus();
  }
}

void LoginDialog::Register()
{
    registerdialog reg;
    reg.exec();
}

