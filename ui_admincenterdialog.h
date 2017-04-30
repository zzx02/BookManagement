/********************************************************************************
** Form generated from reading UI file 'admincenterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCENTERDIALOG_H
#define UI_ADMINCENTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminCenterdialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab1;
    QTableView *Allbook;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineBookno;
    QPushButton *buttonSearch;
    QPushButton *buttonDelete;
    QTableView *InsertBook;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *bookno;
    QLabel *label_4;
    QLineEdit *category;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *title;
    QLabel *label_6;
    QLineEdit *author;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *d;
    QLineEdit *publisher;
    QLabel *label_8;
    QLineEdit *price;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *year;
    QLabel *label_10;
    QLineEdit *count;
    QPushButton *multi;
    QPushButton *single;
    QPushButton *clear;
    QPushButton *buttonConfirm;
    QWidget *tab2;
    QTableView *user;
    QTableView *theirbook;
    QLabel *label_7;
    QPushButton *detailsUser;
    QPushButton *deleteuser;
    QPushButton *buttonReturn;

    void setupUi(QDialog *AdminCenterdialog)
    {
        if (AdminCenterdialog->objectName().isEmpty())
            AdminCenterdialog->setObjectName(QStringLiteral("AdminCenterdialog"));
        AdminCenterdialog->resize(700, 600);
        tabWidget = new QTabWidget(AdminCenterdialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 680, 560));
        tab1 = new QWidget();
        tab1->setObjectName(QStringLiteral("tab1"));
        Allbook = new QTableView(tab1);
        Allbook->setObjectName(QStringLiteral("Allbook"));
        Allbook->setGeometry(QRect(10, 10, 370, 511));
        Allbook->setDragEnabled(true);
        Allbook->setSortingEnabled(true);
        horizontalLayoutWidget = new QWidget(tab1);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(389, 10, 281, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineBookno = new QLineEdit(horizontalLayoutWidget);
        lineBookno->setObjectName(QStringLiteral("lineBookno"));

        horizontalLayout->addWidget(lineBookno);

        buttonSearch = new QPushButton(horizontalLayoutWidget);
        buttonSearch->setObjectName(QStringLiteral("buttonSearch"));

        horizontalLayout->addWidget(buttonSearch);

        buttonDelete = new QPushButton(horizontalLayoutWidget);
        buttonDelete->setObjectName(QStringLiteral("buttonDelete"));

        horizontalLayout->addWidget(buttonDelete);

        InsertBook = new QTableView(tab1);
        InsertBook->setObjectName(QStringLiteral("InsertBook"));
        InsertBook->setGeometry(QRect(390, 291, 271, 231));
        InsertBook->setDragEnabled(true);
        InsertBook->setSortingEnabled(true);
        label_2 = new QLabel(tab1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(390, 60, 131, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        label_2->setFont(font);
        horizontalLayoutWidget_2 = new QWidget(tab1);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(390, 100, 281, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        bookno = new QLineEdit(horizontalLayoutWidget_2);
        bookno->setObjectName(QStringLiteral("bookno"));

        horizontalLayout_2->addWidget(bookno);

        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        category = new QLineEdit(horizontalLayoutWidget_2);
        category->setObjectName(QStringLiteral("category"));

        horizontalLayout_2->addWidget(category);

        horizontalLayoutWidget_3 = new QWidget(tab1);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(390, 140, 281, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        title = new QLineEdit(horizontalLayoutWidget_3);
        title->setObjectName(QStringLiteral("title"));

        horizontalLayout_3->addWidget(title);

        label_6 = new QLabel(horizontalLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        author = new QLineEdit(horizontalLayoutWidget_3);
        author->setObjectName(QStringLiteral("author"));

        horizontalLayout_3->addWidget(author);

        horizontalLayoutWidget_4 = new QWidget(tab1);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(390, 180, 281, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        d = new QLabel(horizontalLayoutWidget_4);
        d->setObjectName(QStringLiteral("d"));

        horizontalLayout_4->addWidget(d);

        publisher = new QLineEdit(horizontalLayoutWidget_4);
        publisher->setObjectName(QStringLiteral("publisher"));

        horizontalLayout_4->addWidget(publisher);

        label_8 = new QLabel(horizontalLayoutWidget_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        price = new QLineEdit(horizontalLayoutWidget_4);
        price->setObjectName(QStringLiteral("price"));

        horizontalLayout_4->addWidget(price);

        horizontalLayoutWidget_5 = new QWidget(tab1);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(390, 220, 281, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(horizontalLayoutWidget_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);

        year = new QLineEdit(horizontalLayoutWidget_5);
        year->setObjectName(QStringLiteral("year"));

        horizontalLayout_5->addWidget(year);

        label_10 = new QLabel(horizontalLayoutWidget_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);

        count = new QLineEdit(horizontalLayoutWidget_5);
        count->setObjectName(QStringLiteral("count"));

        horizontalLayout_5->addWidget(count);

        multi = new QPushButton(tab1);
        multi->setObjectName(QStringLiteral("multi"));
        multi->setGeometry(QRect(530, 260, 61, 23));
        single = new QPushButton(tab1);
        single->setObjectName(QStringLiteral("single"));
        single->setGeometry(QRect(460, 260, 61, 23));
        clear = new QPushButton(tab1);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(390, 260, 61, 23));
        buttonConfirm = new QPushButton(tab1);
        buttonConfirm->setObjectName(QStringLiteral("buttonConfirm"));
        buttonConfirm->setGeometry(QRect(600, 260, 61, 23));
        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QStringLiteral("tab2"));
        user = new QTableView(tab2);
        user->setObjectName(QStringLiteral("user"));
        user->setGeometry(QRect(10, 110, 321, 381));
        user->setSortingEnabled(true);
        theirbook = new QTableView(tab2);
        theirbook->setObjectName(QStringLiteral("theirbook"));
        theirbook->setGeometry(QRect(350, 110, 321, 381));
        theirbook->setSortingEnabled(true);
        label_7 = new QLabel(tab2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 20, 131, 31));
        label_7->setFont(font);
        detailsUser = new QPushButton(tab2);
        detailsUser->setObjectName(QStringLiteral("detailsUser"));
        detailsUser->setGeometry(QRect(220, 500, 75, 23));
        deleteuser = new QPushButton(tab2);
        deleteuser->setObjectName(QStringLiteral("deleteuser"));
        deleteuser->setGeometry(QRect(390, 500, 75, 23));
        tabWidget->addTab(tab2, QString());
        buttonReturn = new QPushButton(AdminCenterdialog);
        buttonReturn->setObjectName(QStringLiteral("buttonReturn"));
        buttonReturn->setGeometry(QRect(600, 10, 75, 23));

        retranslateUi(AdminCenterdialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdminCenterdialog);
    } // setupUi

    void retranslateUi(QDialog *AdminCenterdialog)
    {
        AdminCenterdialog->setWindowTitle(QApplication::translate("AdminCenterdialog", "\347\256\241\347\220\206\344\270\255\345\277\203", Q_NULLPTR));
        label->setText(QApplication::translate("AdminCenterdialog", "\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        buttonSearch->setText(QApplication::translate("AdminCenterdialog", "\346\237\245\350\257\242", Q_NULLPTR));
        buttonDelete->setText(QApplication::translate("AdminCenterdialog", "\345\210\240\351\231\244", Q_NULLPTR));
        label_2->setText(QApplication::translate("AdminCenterdialog", "\344\271\246\347\261\215\345\205\245\345\272\223", Q_NULLPTR));
        label_3->setText(QApplication::translate("AdminCenterdialog", "\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("AdminCenterdialog", "\347\261\273\345\210\253\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("AdminCenterdialog", "\346\240\207\351\242\230\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("AdminCenterdialog", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        d->setText(QApplication::translate("AdminCenterdialog", "\345\207\272\347\211\210\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("AdminCenterdialog", "\344\273\267\346\240\274\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("AdminCenterdialog", "\345\271\264\344\273\275\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("AdminCenterdialog", "\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        multi->setText(QApplication::translate("AdminCenterdialog", "\345\244\232\346\234\254\345\205\245\345\272\223", Q_NULLPTR));
        single->setText(QApplication::translate("AdminCenterdialog", "\345\215\225\346\234\254\345\205\245\345\272\223", Q_NULLPTR));
        clear->setText(QApplication::translate("AdminCenterdialog", "\346\270\205\347\251\272", Q_NULLPTR));
        buttonConfirm->setText(QApplication::translate("AdminCenterdialog", "\347\241\256\350\256\244", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("AdminCenterdialog", "\344\271\246\347\261\215\347\256\241\347\220\206", Q_NULLPTR));
        label_7->setText(QApplication::translate("AdminCenterdialog", "\347\224\250\346\210\267\345\210\227\350\241\250\357\274\232", Q_NULLPTR));
        detailsUser->setText(QApplication::translate("AdminCenterdialog", "\346\237\245\347\234\213\350\257\246\347\273\206", Q_NULLPTR));
        deleteuser->setText(QApplication::translate("AdminCenterdialog", "\345\210\240\351\231\244\347\224\250\346\210\267", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("AdminCenterdialog", "\347\224\250\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
        buttonReturn->setText(QApplication::translate("AdminCenterdialog", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminCenterdialog: public Ui_AdminCenterdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCENTERDIALOG_H
