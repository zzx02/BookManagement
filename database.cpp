#include "database.h"
#include <QCryptographicHash>
#include <QDebug>
#include <QDateTime>

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
    model->setHeaderData(0, Qt::Horizontal, tr("编号"));
    model->setHeaderData(1, Qt::Horizontal, tr("类别"));
    model->setHeaderData(2, Qt::Horizontal, tr("标题"));
    model->setHeaderData(3, Qt::Horizontal, tr("作者"));
    model->setHeaderData(4, Qt::Horizontal, tr("出版年份"));
    model->setHeaderData(5, Qt::Horizontal, tr("出版社"));
    model->setHeaderData(6, Qt::Horizontal, tr("价格"));
    model->setHeaderData(7, Qt::Horizontal, tr("库存"));
    model->setHeaderData(8, Qt::Horizontal, tr("总量"));
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

bool database::borrowbook(QVariant bookno, QString Username)
{
    QDateTime currenttime = QDateTime::currentDateTime();
    QDateTime returntime = currenttime.addDays(30);
    if (connect("bookmanagement")){
        QSqlQuery search;
        search.prepare("SELECT * FROM borrow WHERE username = :username and bookno = :bookno");
        search.bindValue(":bookno", bookno.toString());
        search.bindValue(":username", Username);
        search.exec();
        if (search.next())
        {
            QSqlQuery update;
            update.prepare("UPDATE borrow set book_count = book_count + 1 where username = :username and bookno = :bookno");
            update.bindValue(":bookno", bookno.toString());
            update.bindValue(":username", Username);
            update.exec();
        }
        else{
            QSqlQuery query;
            query.prepare("INSERT INTO borrow value (:bookno, :username, :bookcount, :borrowtime, :returntime)");
            query.bindValue(":bookno",bookno.toString());
            query.bindValue(":username",Username);
            query.bindValue(":bookcount", 1);
            query.bindValue(":borrowtime", currenttime.toString("yyyy-MM-dd"));
            query.bindValue(":returntime", returntime.toString("yyyy-MM-dd"));
//            qDebug() << bookno.toString() ;
            query.exec();
        }
        QSqlQuery update;
        update.prepare("UPDATE book set stock = stock - 1 where bookno = :bookno");
        update.bindValue(":bookno", bookno.toString());
        update.exec();
        return true;
    }
    else return false;
}

void database::showMyBook(const QString filter, QSqlTableModel* model)
{
    model->setTable("self_view");
    model->setSort(1, Qt::AscendingOrder);
    model->setFilter(filter);
    model->setHeaderData(0, Qt::Horizontal, tr("编号"));
    model->setHeaderData(1, Qt::Horizontal, tr("标题"));
    model->setHeaderData(2, Qt::Horizontal, tr("借阅者"));
    model->setHeaderData(3, Qt::Horizontal, tr("数量"));
    model->setHeaderData(4, Qt::Horizontal, tr("借出日期"));
    model->setHeaderData(5, Qt::Horizontal, tr("归还日期"));
    model->setHeaderData(6, Qt::Horizontal, tr("价格"));
    model->select();
    return ;
}

bool database::ReturnBook(QString Username, QVariant bookno)
{
    if (connect("bookmanagement")) {
        QSqlQuery query;
        query.prepare("SELECT book_count FROM self_view WHERE username = :username and bookno = :bookno");
        query.bindValue(":bookno", bookno.toString());
        query.bindValue(":username", Username);
        query.exec();
        if (query.next())
        {
            if (query.value(0).toString() == "1")
            {
               QSqlQuery Delete;
               Delete.prepare("DELETE FROM borrow WHERE username = :username and bookno = :bookno");
               Delete.bindValue(":bookno", bookno.toString());
               Delete.bindValue(":username", Username);
               Delete.exec();
            }
            else
            {
                QSqlQuery Update;
                Update.prepare("UPDATE borrow SET book_count = book_count - 1 WHERE username = :username and bookno = :bookno");
                Update.bindValue(":bookno", bookno.toString());
                Update.bindValue(":username", Username);
                Update.exec();
            }
        }
        QSqlQuery update;
        update.prepare("UPDATE book SET stock = stock + 1 where bookno = :bookno");
        update.bindValue(":bookno", bookno.toString());
        update.exec();
        return true;
    }
    else return false;
}

bool database::continueBorrow(QString Username, QVariant bookno)
{
    QDateTime returntime;
    if (connect("bookmanagement")) {
        QSqlQuery search;
        search.prepare("SELECT return_time FROM borrow WHERE username = :username and bookno = :bookno");
        search.bindValue(":bookno", bookno.toString());
        search.bindValue(":username", Username);
        search.exec();
        search.next();
        qDebug() << search.value(0).toString();
        returntime = QDateTime::fromString(search.value(0).toString(), "yyyy-MM-dd");
        qDebug() << returntime.toString("yyyy-MM-dd");
        QSqlQuery query;
        query.prepare("UPDATE borrow SET return_time = :returntime WHERE username = :username and bookno = :bookno");
        query.bindValue(":bookno", bookno.toString());
        query.bindValue(":username", Username);
        query.bindValue(":returntime", returntime.addDays(30).toString("yyyy-MM-dd"));
        query.exec();
        return true;
    }
    else return false;
}
