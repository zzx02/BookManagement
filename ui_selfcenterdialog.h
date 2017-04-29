/********************************************************************************
** Form generated from reading UI file 'selfcenterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELFCENTERDIALOG_H
#define UI_SELFCENTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Selfcenterdialog
{
public:
    QTableView *view;
    QLabel *label;
    QLabel *label_2;
    QPushButton *returnButton;
    QPushButton *continueButton;
    QLabel *welcomeLabel;
    QPushButton *closeButton;

    void setupUi(QDialog *Selfcenterdialog)
    {
        if (Selfcenterdialog->objectName().isEmpty())
            Selfcenterdialog->setObjectName(QStringLiteral("Selfcenterdialog"));
        Selfcenterdialog->resize(650, 600);
        view = new QTableView(Selfcenterdialog);
        view->setObjectName(QStringLiteral("view"));
        view->setGeometry(QRect(30, 180, 600, 400));
        label = new QLabel(Selfcenterdialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 141, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(22);
        label->setFont(font);
        label_2 = new QLabel(Selfcenterdialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 141, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        returnButton = new QPushButton(Selfcenterdialog);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(330, 140, 75, 23));
        continueButton = new QPushButton(Selfcenterdialog);
        continueButton->setObjectName(QStringLiteral("continueButton"));
        continueButton->setGeometry(QRect(440, 140, 75, 23));
        welcomeLabel = new QLabel(Selfcenterdialog);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(180, 50, 451, 16));
        closeButton = new QPushButton(Selfcenterdialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(550, 140, 75, 23));

        retranslateUi(Selfcenterdialog);

        QMetaObject::connectSlotsByName(Selfcenterdialog);
    } // setupUi

    void retranslateUi(QDialog *Selfcenterdialog)
    {
        Selfcenterdialog->setWindowTitle(QApplication::translate("Selfcenterdialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Selfcenterdialog", "\344\270\252\344\272\272\344\270\255\345\277\203", Q_NULLPTR));
        label_2->setText(QApplication::translate("Selfcenterdialog", "\346\210\221\347\232\204\345\267\262\345\200\237\344\271\246\347\233\256:", Q_NULLPTR));
        returnButton->setText(QApplication::translate("Selfcenterdialog", "\345\275\222\350\277\230", Q_NULLPTR));
        continueButton->setText(QApplication::translate("Selfcenterdialog", "\347\273\255\345\200\237", Q_NULLPTR));
        welcomeLabel->setText(QApplication::translate("Selfcenterdialog", "WelcomeLabel", Q_NULLPTR));
        closeButton->setText(QApplication::translate("Selfcenterdialog", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Selfcenterdialog: public Ui_Selfcenterdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELFCENTERDIALOG_H
