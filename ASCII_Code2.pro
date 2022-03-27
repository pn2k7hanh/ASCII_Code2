#-------------------------------------------------
#
# Project created by QtCreator 2022-03-14T14:49:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ASCII_Code2
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h \
    core.h

FORMS    += widget.ui
QMAKE_CXXFLAGS += -static-libstdc++ -static-libgcc
RESOURCES += \
    application.qrc
