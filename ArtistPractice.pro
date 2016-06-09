#-------------------------------------------------
#
# Project created by QtCreator 2016-05-18T22:10:29
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ArtistPractice
TEMPLATE = app
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
RCC_DIR = build


SOURCES += src/main.cpp\
           src/mainwindow.cpp \
           src/userAdmin.cpp \
           src/counter.cpp \
           src/timeline.cpp \
           src/configsession.cpp \
           src/library.cpp

HEADERS  += src/mainwindow.h \
            src/userAdmin.h \
            src/counter.h \
            src/timeline.h \
            src/configsession.h \
            src/library.h

FORMS    += src/mainwindow.ui \
            src/counter.ui \
            src/library.ui \
            src/configsession.ui
