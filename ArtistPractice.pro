#-------------------------------------------------
#
# Project created by QtCreator 2016-05-18T22:10:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ArtistPractice
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    counter.cpp \
    timeline.cpp \
    configsession.cpp \
    library.cpp

HEADERS  += mainwindow.h \
    counter.h \
    timeline.h \
    configsession.h \
    library.h

FORMS    += mainwindow.ui \
    counter.ui \
    configsession.ui
