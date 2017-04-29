/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *nameBook;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *namePublisher;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *nameCategory;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *nameAuthor;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *price1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *boxYear;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *price2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QComboBox *boxYear2;
    QPushButton *checkButton;
    QPushButton *clearButton;
    QTableView *view;
    QPushButton *selfCenter;
    QPushButton *borrowButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *conditionLabel;
    QLabel *usernameLabel;
    QLabel *timeLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(850, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 20, 711, 54));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        nameBook = new QLineEdit(horizontalLayoutWidget);
        nameBook->setObjectName(QStringLiteral("nameBook"));

        horizontalLayout_3->addWidget(nameBook);

        horizontalLayout_3->setStretch(0, 4);
        horizontalLayout_3->setStretch(1, 10);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        namePublisher = new QLineEdit(horizontalLayoutWidget);
        namePublisher->setObjectName(QStringLiteral("namePublisher"));

        horizontalLayout_4->addWidget(namePublisher);

        horizontalLayout_4->setStretch(0, 4);
        horizontalLayout_4->setStretch(1, 10);

        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_8 = new QLabel(horizontalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_10->addWidget(label_8);

        nameCategory = new QLineEdit(horizontalLayoutWidget);
        nameCategory->setObjectName(QStringLiteral("nameCategory"));

        horizontalLayout_10->addWidget(nameCategory);

        horizontalLayout_10->setStretch(0, 4);
        horizontalLayout_10->setStretch(1, 10);

        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        nameAuthor = new QLineEdit(horizontalLayoutWidget);
        nameAuthor->setObjectName(QStringLiteral("nameAuthor"));

        horizontalLayout_7->addWidget(nameAuthor);

        horizontalLayout_7->setStretch(0, 4);
        horizontalLayout_7->setStretch(1, 10);

        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        price1 = new QLineEdit(horizontalLayoutWidget);
        price1->setObjectName(QStringLiteral("price1"));

        horizontalLayout_8->addWidget(price1);

        horizontalLayout_8->setStretch(0, 4);
        horizontalLayout_8->setStretch(1, 10);

        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        boxYear = new QComboBox(horizontalLayoutWidget);
        boxYear->setObjectName(QStringLiteral("boxYear"));

        horizontalLayout_5->addWidget(boxYear);

        horizontalLayout_5->setStretch(0, 4);
        horizontalLayout_5->setStretch(1, 10);

        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);

        price2 = new QLineEdit(horizontalLayoutWidget);
        price2->setObjectName(QStringLiteral("price2"));

        horizontalLayout_9->addWidget(price2);

        horizontalLayout_9->setStretch(0, 4);
        horizontalLayout_9->setStretch(1, 10);

        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        boxYear2 = new QComboBox(horizontalLayoutWidget);
        boxYear2->setObjectName(QStringLiteral("boxYear2"));
        boxYear2->setEditable(false);

        horizontalLayout_6->addWidget(boxYear2);

        horizontalLayout_6->setStretch(0, 4);
        horizontalLayout_6->setStretch(1, 10);

        verticalLayout_6->addLayout(horizontalLayout_6);


        horizontalLayout->addLayout(verticalLayout_6);

        checkButton = new QPushButton(centralWidget);
        checkButton->setObjectName(QStringLiteral("checkButton"));
        checkButton->setGeometry(QRect(750, 20, 75, 23));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(750, 50, 75, 23));
        view = new QTableView(centralWidget);
        view->setObjectName(QStringLiteral("view"));
        view->setGeometry(QRect(30, 100, 701, 431));
        view->setEditTriggers(QAbstractItemView::NoEditTriggers);
        view->setSelectionBehavior(QAbstractItemView::SelectRows);
        view->setSortingEnabled(true);
        selfCenter = new QPushButton(centralWidget);
        selfCenter->setObjectName(QStringLiteral("selfCenter"));
        selfCenter->setGeometry(QRect(750, 490, 75, 23));
        borrowButton = new QPushButton(centralWidget);
        borrowButton->setObjectName(QStringLiteral("borrowButton"));
        borrowButton->setGeometry(QRect(750, 100, 75, 23));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(740, 390, 101, 91));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        conditionLabel = new QLabel(verticalLayoutWidget);
        conditionLabel->setObjectName(QStringLiteral("conditionLabel"));

        verticalLayout_2->addWidget(conditionLabel);

        usernameLabel = new QLabel(verticalLayoutWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));

        verticalLayout_2->addWidget(usernameLabel);

        timeLabel = new QLabel(verticalLayoutWidget);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));

        verticalLayout_2->addWidget(timeLabel);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 850, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\271\246\345\220\215:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\207\272\347\211\210\347\244\276:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\347\261\273\345\210\253:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\344\275\234\350\200\205:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\344\273\267\346\240\274:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\345\271\264\344\273\275:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "   \342\200\224", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "   \342\200\224", Q_NULLPTR));
        boxYear2->setCurrentText(QString());
        checkButton->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        clearButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", Q_NULLPTR));
        selfCenter->setText(QApplication::translate("MainWindow", "\344\270\252\344\272\272\344\270\255\345\277\203", Q_NULLPTR));
        borrowButton->setText(QApplication::translate("MainWindow", "\345\200\237\344\271\246", Q_NULLPTR));
        conditionLabel->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        usernameLabel->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        timeLabel->setText(QApplication::translate("MainWindow", "currenttime", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
