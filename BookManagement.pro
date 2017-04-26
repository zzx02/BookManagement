#-------------------------------------------------
#
# Project created by QtCreator 2017-04-21T09:26:02
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BookManagement
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    database.cpp \
    logindialog.cpp \
    registerdialog.cpp

HEADERS  += mainwindow.h \
    ui_mainwindow.h \
    database.h \
    logindialog.h \
    ui_logindialog.h \
    registerdialog.h \
    ui_registerdialog.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    registerdialog.ui

RESOURCES += \
    resource.qrc
