include(../defaults.pri)

TEMPLATE = app

CONFIG += console
CONFIG += c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    TestCalcul.cpp \
    TestPersonne.cpp

LIBS += -L../src -lmyapp
LIBS += -lboost_system
LIBS += -lboost_filesystem
LIBS += -lboost_unit_test_framework

