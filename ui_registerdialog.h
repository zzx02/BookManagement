/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *e;
    QLabel *label;
    QLineEdit *username;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *r;
    QLabel *label_2;
    QLineEdit *password;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *t;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *buttonConfirm;
    QPushButton *buttonCancel;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *f;
    QLabel *label_4;
    QLineEdit *department;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(300, 250);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 271, 231));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 30, 231, 22));
        e = new QHBoxLayout(horizontalLayoutWidget);
        e->setObjectName(QStringLiteral("e"));
        e->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        e->addWidget(label);

        username = new QLineEdit(horizontalLayoutWidget);
        username->setObjectName(QStringLiteral("username"));

        e->addWidget(username);

        e->setStretch(0, 4);
        e->setStretch(1, 10);
        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 110, 231, 22));
        r = new QHBoxLayout(horizontalLayoutWidget_2);
        r->setObjectName(QStringLiteral("r"));
        r->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        r->addWidget(label_2);

        password = new QLineEdit(horizontalLayoutWidget_2);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        r->addWidget(password);

        r->setStretch(0, 4);
        r->setStretch(1, 10);
        horizontalLayoutWidget_3 = new QWidget(groupBox);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 150, 231, 22));
        t = new QHBoxLayout(horizontalLayoutWidget_3);
        t->setObjectName(QStringLiteral("t"));
        t->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        t->addWidget(label_3);

        lineEdit_3 = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEchoMode(QLineEdit::Password);

        t->addWidget(lineEdit_3);

        t->setStretch(0, 4);
        t->setStretch(1, 10);
        buttonConfirm = new QPushButton(groupBox);
        buttonConfirm->setObjectName(QStringLiteral("buttonConfirm"));
        buttonConfirm->setGeometry(QRect(40, 190, 75, 23));
        buttonCancel = new QPushButton(groupBox);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setGeometry(QRect(160, 190, 75, 23));
        horizontalLayoutWidget_4 = new QWidget(groupBox);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(20, 70, 231, 22));
        f = new QHBoxLayout(horizontalLayoutWidget_4);
        f->setObjectName(QStringLiteral("f"));
        f->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        f->addWidget(label_4);

        department = new QLineEdit(horizontalLayoutWidget_4);
        department->setObjectName(QStringLiteral("department"));
        department->setEchoMode(QLineEdit::Normal);

        f->addWidget(department);

        f->setStretch(0, 4);
        f->setStretch(1, 10);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "用户注册", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Dialog", "\347\224\250\346\210\267\346\263\250\345\206\214", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        buttonConfirm->setText(QApplication::translate("Dialog", "\347\241\256\350\256\244", Q_NULLPTR));
        buttonCancel->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "\345\255\246\351\231\242\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
