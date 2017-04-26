#include "database.h"
#include <QCryptographicHash>
#include <QDebug>

database::database(QObject *parent) : QObject(parent)
{

}

bool database::connect(const QString &dbname)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName(dbname);
    db.setUserName("root");
    db.setPassword("zzxzzx");
    db.setPort(3306);
    if (!db.open()) {
       QSqlError err = db.lastError();
       QMessageBox::critical(0, QObject::tr("Error"),QObject::tr("The database reported an error: %1").arg(err.text()));
       return false;
    }

//    QSqlQuery query;
//    query.exec("SELECT * FROM users");
//    query.first();
//    qDebug() << query.value(1).toString();
    return true;
}

bool database::userconnect(const QString &dbname)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName(dbname);
    db.setUserName("normal");
    db.setPassword("normal");
    db.setPort(3306);
    if (!db.open()) {
       QSqlError err = db.lastError();
       QMessageBox::critical(0, QObject::tr("Error"),QObject::tr("The database reported an error: %1").arg(err.text()));
       return false;
    }
    return true;
}

bool database::checkLogin(const QString username, const QString password)
{
    QString md5;
    QByteArray bb;
    bb = QCryptographicHash::hash ( password.toLatin1(), QCryptographicHash::Md5 );
    md5.append(bb.toHex());
  if (connect("bookmanagement")) {
      QSqlQuery query;
      query.prepare("SELECT user_password FROM users WHERE username = :username");
      query.bindValue(":username", username);
      query.exec();
//      qDebug() << username;
      if (query.next()) {
          QString correct_password = query.value(0).toString();
//          qDebug() << correct_password;
          if (md5 != correct_password)
               return false;
      }
      else return false;
      return true;
   }
    return false;
}

void database::showSelect(const QString filter, QSqlTableModel* model)
{
    model->setTable("user_book");
    model->setSort(1, Qt::AscendingOrder);
    model->setFilter(filter);
    model->setHeaderData(0, Qt::Horizontal, tr("类别"));
    model->setHeaderData(1, Qt::Horizontal, tr("标题"));
    model->setHeaderData(2, Qt::Horizontal, tr("作者"));
    model->setHeaderData(3, Qt::Horizontal, tr("出版年份"));
    model->setHeaderData(4, Qt::Horizontal, tr("出版社"));
    model->setHeaderData(5, Qt::Horizontal, tr("价格"));
    model->setHeaderData(6, Qt::Horizontal, tr("库存"));
    model->setHeaderData(7, Qt::Horizontal, tr("总量"));
    model->select();
    return ;
}
//category, title, author, publish_year, price, stock, total

bool database::checkUsernameValid(const QString username)
{
    if (connect("bookmanagement")){
        QSqlQuery query;
        query.prepare("SELECT user_password FROM users WHERE username = :username");
        query.bindValue(":username", username);
        query.exec();
        if (query.next())
            return false;
        else return true;
    }
    else return false;
}

bool database::createUser(const QString username, const QString password, const QString department)
{
    QString md5;
    QByteArray bb;
    bb = QCryptographicHash::hash ( password.toLatin1(), QCryptographicHash::Md5 );
    md5.append(bb.toHex());
    if (connect("bookmanagement")){
        QSqlQuery query;
        query.prepare("INSERT INTO users value (:username, :password, :department)");
        query.bindValue(":username", username);
        query.bindValue(":password", md5);
        query.bindValue(":department", department);
        query.exec();
        return true;
    }
    else return false;
}

