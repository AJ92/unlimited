#-------------------------------------------------
#
# Project created by QtCreator 2016-10-02T18:05:54
#
#-------------------------------------------------

QT       -= core
QT       -= gui

TARGET = entity
TEMPLATE = lib

DEFINES += ENTITY_LIBRARY

SOURCES += entity.cpp \
    entitymanager.cpp \
    component.cpp

HEADERS += entity.h\
        entity_global.h \
    entity_p.h \
    entitymanager.h \
    entitymanager_p.h \
    component.h \
    component_p.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
