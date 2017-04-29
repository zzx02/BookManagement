#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QMessageBox>
#include <QObject>

class database : public QObject
{
    Q_OBJECT
public:
    explicit database(QObject *parent = 0);

    bool checkLogin(const QString , const QString);
    void showSelect(const QString filter, QSqlTableModel* model);
    bool checkUsernameValid(const QString username);
    bool createUser(const QString username, const QString password, const QString department);
    bool borrowbook(QVariant bookno, QString Username);
signals:

public slots:

private:
    bool connect(const QString &dbname);
    bool userconnect(const QString &dbname);

};

#endif // DATABASE_H
