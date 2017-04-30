#include "admincenterdialog.h"
#include "ui_admincenterdialog.h"
#include <QDebug>
AdminCenterdialog::AdminCenterdialog(QWidget *parent) :
    QDialog(parent)
{
    this->setupUi(this);
    connect(clear, &QPushButton::clicked, this, &AdminCenterdialog::clearText );
    connect(detailsUser, &QPushButton::clicked, this, &AdminCenterdialog::showdetails);
    connect(buttonSearch, &QPushButton::clicked, this, &AdminCenterdialog::searchBook);
    connect(buttonDelete, &QPushButton::clicked, this, &AdminCenterdialog::deleteBook);
    connect(single, &QPushButton::clicked, this, &AdminCenterdialog::Singlebook);
    connect(multi, &QPushButton::clicked, this, &AdminCenterdialog::Multibook);
    connect(buttonConfirm, &QPushButton::clicked, this,&AdminCenterdialog::Refresh);
    connect(buttonReturn, &QPushButton::clicked, this, &QDialog::close);
    connect(deleteuser, &QPushButton::clicked, this, &AdminCenterdialog::UserDelete);

    model_users = new QSqlTableModel;
    db.showUsers(model_users);
    user ->setModel(model_users);
    user->setColumnWidth(0, 80);
    user->setSelectionMode(QAbstractItemView::SingleSelection);
    user->setSelectionBehavior(QAbstractItemView::SelectRows);

    model_books = new QSqlTableModel;
    db.showSelect("", model_books);

    Allbook -> setModel(model_books);
    Allbook->setSelectionMode(QAbstractItemView::SingleSelection);
    Allbook->setSelectionBehavior(QAbstractItemView::SelectRows);
    Allbook->resizeColumnsToContents();

    model_tobeinsert = new QSqlTableModel;
    model_tobeinsert->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model_tobeinsert->setTable("book");
    model_tobeinsert->setFilter("bookno < 0");
    model_tobeinsert->setHeaderData(0, Qt::Horizontal, tr("编号"));
    model_tobeinsert->setHeaderData(1, Qt::Horizontal, tr("类别"));
    model_tobeinsert->setHeaderData(2, Qt::Horizontal, tr("标题"));
    model_tobeinsert->setHeaderData(3, Qt::Horizontal, tr("作者"));
    model_tobeinsert->setHeaderData(4, Qt::Horizontal, tr("年份"));
    model_tobeinsert->setHeaderData(5, Qt::Horizontal, tr("出版社"));
    model_tobeinsert->setHeaderData(6, Qt::Horizontal, tr("价格"));
    model_tobeinsert->setHeaderData(7, Qt::Horizontal, tr("入库时间"));
    model_tobeinsert->setHeaderData(8, Qt::Horizontal, tr("库存"));
    model_tobeinsert->setHeaderData(9, Qt::Horizontal, tr("总量"));
    model_tobeinsert->select();
}

AdminCenterdialog::~AdminCenterdialog()
{
//    delete ui;
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

void AdminCenterdialog::showdetails()
{
    model_userown = new QSqlTableModel;
    int tmpindex = user->currentIndex().row();
    QSqlRecord currentRecord=model_users->record(tmpindex);
    QVariant currentData = currentRecord.value(0);
    QString Filter = " username = '" +  currentData.toString()+ "'";
    db.showMyBook(Filter, model_userown);
    theirbook ->setModel(model_userown);
    theirbook->setColumnWidth(0, 80);
    theirbook->setSelectionMode(QAbstractItemView::SingleSelection);
    theirbook->setSelectionBehavior(QAbstractItemView::SelectRows);
    theirbook->setColumnWidth(0, 40);
    theirbook->setColumnWidth(1, 40);
    theirbook->setColumnWidth(2, 80);
    theirbook->setColumnWidth(3, 30);
    theirbook->setColumnWidth(4, 70);
    theirbook->setColumnWidth(5, 70);
}

void AdminCenterdialog::searchBook()
{
    QString Filter;
    Filter = "bookno like '" + lineBookno->text() +"%'";
    model_books = new QSqlTableModel;
    db.showSelect(Filter, model_books);

    Allbook -> setModel(model_books);
    Allbook->setSelectionMode(QAbstractItemView::SingleSelection);
    Allbook->setSelectionBehavior(QAbstractItemView::SelectRows);
    Allbook->resizeColumnsToContents();
    if (model_books->rowCount() == 0)
        QMessageBox::information(this,tr("注意"),tr("暂未能查询到所要查询的书籍"),QMessageBox::Yes);
}



void AdminCenterdialog::deleteBook()
{
    int tmpindex = Allbook->currentIndex().row();
    QSqlRecord currentRecord=model_books->record(tmpindex);
    QVariant currentData = currentRecord.value(0);
    QString bookno = currentData.toString();

    if (QMessageBox::No == QMessageBox::question(this,
                                                  tr("警告"),
                                                  tr("你真的要删除此书吗?"),
                                                  QMessageBox::Yes | QMessageBox::No,
                                                  QMessageBox::Yes))
    {
        searchBook();
        return;
    }

    if (currentRecord.value(7) != currentRecord.value(8))
    {
        QMessageBox::warning(this,tr("警告"),tr("本书尚未全部入库，无法删除"),QMessageBox::Yes);
        searchBook();
        return;
    }
    else
    {
        if (db.deleteBook(bookno))
             QMessageBox::information(this,tr("成功"),tr("删除成功"),QMessageBox::Yes);
        else
            QMessageBox::information(this,tr("失败"),tr("删除失败"),QMessageBox::Yes);
        searchBook();
        return;
    }
}

void AdminCenterdialog::Singlebook()
{
    QString new_bookno = bookno->text();
    QString new_author = author->text();
    QString new_year   = year->text();
    QString new_number = count->text();
    QString new_title = title->text();
    QString new_price = price->text();
    QString new_publisher = publisher->text();
    QString new_category = category->text();

    if (new_bookno == "" || new_author == "" || new_year == "" || new_number =="" ||
            new_title == "" || new_price == "" || new_publisher == "" || new_category == "")
    {
        QMessageBox::warning(this,tr("警告"),tr("信息填写不完整"),QMessageBox::Yes);
        return;
    }
    else
    {

        int row = model_tobeinsert->rowCount();
        qDebug() << row;
        model_tobeinsert->insertRows(row, 1);
        model_tobeinsert->setData(model_tobeinsert->index(row, 0), new_bookno);
        model_tobeinsert->setData(model_tobeinsert->index(row, 1), new_category);
        model_tobeinsert->setData(model_tobeinsert->index(row, 2), new_title);
        model_tobeinsert->setData(model_tobeinsert->index(row, 3), new_publisher);
        model_tobeinsert->setData(model_tobeinsert->index(row, 4), new_year);
        model_tobeinsert->setData(model_tobeinsert->index(row, 5), new_author);
        model_tobeinsert->setData(model_tobeinsert->index(row, 6), new_price);
        model_tobeinsert->setData(model_tobeinsert->index(row, 7),  QDateTime::currentDateTime().toString("yyyy-MM-dd"));
        model_tobeinsert->setData(model_tobeinsert->index(row, 8), new_number);
        model_tobeinsert->setData(model_tobeinsert->index(row, 9), new_number);
        model_tobeinsert->submitAll();
        InsertBook->setModel(model_tobeinsert);
        InsertBook->setSelectionMode(QAbstractItemView::SingleSelection);
        InsertBook->setSelectionBehavior(QAbstractItemView::SelectRows);
        InsertBook->resizeColumnsToContents();
        QSqlRecord record = model_tobeinsert->record();
    }
    return;
}

void AdminCenterdialog::Multibook()
{
    QString Alltext;
    QString path = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("TXT Files(*.txt)"));
    if(!path.isEmpty()) {
        QFile file(path);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QMessageBox::warning(this, tr("Read File"), tr("Cannot open file:\n%1").arg(path));
            return;
        }
        QTextStream in(&file);
        Alltext = in.readAll();
        file.close();
    } else {
        QMessageBox::warning(this, tr("Path"), tr("You did not select any file."));
        return;
    }
    QStringList list = Alltext.split("\n");
    QStringList list2;
    int row = model_tobeinsert->rowCount();
    foreach(Alltext, list)
    {
        list2 = Alltext.split(", ");
        qDebug() << list2.count();
        qDebug() << row;
        if (list2.count() != 8)
        {
            qDebug() << list2.count();
            QMessageBox::warning(this, tr("错误"), tr("所输入信息不完整"));
            return;
        }
        model_tobeinsert->insertRows(row, 1);
        model_tobeinsert->setData(model_tobeinsert->index(row, 0), list2.at(0));
        model_tobeinsert->setData(model_tobeinsert->index(row, 1), list2.at(1));
        model_tobeinsert->setData(model_tobeinsert->index(row, 2), list2.at(2));
        model_tobeinsert->setData(model_tobeinsert->index(row, 3), list2.at(3));
        model_tobeinsert->setData(model_tobeinsert->index(row, 4), list2.at(4));
        model_tobeinsert->setData(model_tobeinsert->index(row, 5), list2.at(5));
        model_tobeinsert->setData(model_tobeinsert->index(row, 6), list2.at(6));
        model_tobeinsert->setData(model_tobeinsert->index(row, 7),  QDateTime::currentDateTime().toString("yyyy-MM-dd"));
        model_tobeinsert->setData(model_tobeinsert->index(row, 8), list2.at(7));
        model_tobeinsert->setData(model_tobeinsert->index(row, 9), list2.at(7));
        row ++ ;
        model_tobeinsert->submitAll();

    }
    model_tobeinsert->submitAll();
    InsertBook->setModel(model_tobeinsert);
    InsertBook->setSelectionMode(QAbstractItemView::SingleSelection);
    InsertBook->setSelectionBehavior(QAbstractItemView::SelectRows);
    InsertBook->resizeColumnsToContents();
}



void AdminCenterdialog::Refresh()
{
    model_tobeinsert = new QSqlTableModel;
    model_tobeinsert->setTable("book");
    model_tobeinsert->setFilter("bookno < 0");
    model_tobeinsert->setHeaderData(0, Qt::Horizontal, tr("编号"));
    model_tobeinsert->setHeaderData(1, Qt::Horizontal, tr("类别"));
    model_tobeinsert->setHeaderData(2, Qt::Horizontal, tr("标题"));
    model_tobeinsert->setHeaderData(3, Qt::Horizontal, tr("作者"));
    model_tobeinsert->setHeaderData(4, Qt::Horizontal, tr("年份"));
    model_tobeinsert->setHeaderData(5, Qt::Horizontal, tr("出版社"));
    model_tobeinsert->setHeaderData(6, Qt::Horizontal, tr("价格"));
    model_tobeinsert->setHeaderData(7, Qt::Horizontal, tr("入库时间"));
    model_tobeinsert->setHeaderData(8, Qt::Horizontal, tr("库存"));
    model_tobeinsert->setHeaderData(9, Qt::Horizontal, tr("总量"));
    model_tobeinsert->select();
    InsertBook->setModel(model_tobeinsert);
    InsertBook->setSelectionMode(QAbstractItemView::SingleSelection);
    InsertBook->setSelectionBehavior(QAbstractItemView::SelectRows);
    InsertBook->resizeColumnsToContents();
    clearText();
    searchBook();
    QMessageBox::information(this,tr("成功"),tr("图书入库均成功"),QMessageBox::Yes);
}

void AdminCenterdialog::UserDelete()
{
    int tmpindex = user->currentIndex().row();
    QSqlRecord currentRecord=model_users->record(tmpindex);
    QVariant currentData = currentRecord.value(0);
    QString username = currentData.toString();

    if (QMessageBox::No == QMessageBox::question(this,
                                                  tr("警告"),
                                                  tr("你真的要删除这个用户吗?"),
                                                  QMessageBox::Yes | QMessageBox::No,
                                                  QMessageBox::Yes))
    {
        model_users = new QSqlTableModel;
        db.showUsers(model_users);
        user ->setModel(model_users);
        user->setColumnWidth(0, 80);
        user->setSelectionMode(QAbstractItemView::SingleSelection);
        user->setSelectionBehavior(QAbstractItemView::SelectRows);
        return;
    }

    if (currentRecord.value(2).toInt() > 0)
    {
        QMessageBox::warning(this,tr("警告"),tr("本用户尚有未还的书，不能删除"),QMessageBox::Yes);
        model_users = new QSqlTableModel;
        db.showUsers(model_users);
        user ->setModel(model_users);
        user->setColumnWidth(0, 80);
        user->setSelectionMode(QAbstractItemView::SingleSelection);
        user->setSelectionBehavior(QAbstractItemView::SelectRows);
        return;
    }
    else
    {
        if (db.deleteUser(username))
             QMessageBox::information(this,tr("成功"),tr("删除成功"),QMessageBox::Yes);
        else
            QMessageBox::information(this,tr("失败"),tr("删除失败"),QMessageBox::Yes);
        model_users = new QSqlTableModel;
        db.showUsers(model_users);
        user ->setModel(model_users);
        user->setColumnWidth(0, 80);
        user->setSelectionMode(QAbstractItemView::SingleSelection);
        user->setSelectionBehavior(QAbstractItemView::SelectRows);
        return;
    }
}

