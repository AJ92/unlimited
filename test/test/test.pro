#-------------------------------------------------
#
# Project created by QtCreator 2016-10-02T18:49:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../libs/entity/build-entity-Desktop_Qt_5_6_0_MSVC2013_64bit-Release/release/ -lentity
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../libs/entity/build-entity-Desktop_Qt_5_6_0_MSVC2013_64bit-Debug/debug/ -lentity

INCLUDEPATH += $$PWD/../../libs/entity/entity
DEPENDPATH += $$PWD/../../libs/entity/entity
