TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    CCercle.cpp \
    CDessin.cpp \
    CForme.cpp \
    CPolygone.cpp \
    CRectangle.cpp \
    main_formes.cpp

DISTFILES += \
    Exercice13.pro.user

HEADERS += \
    CCercle.h \
    CCoord.h \
    CCouleur.h \
    CDessin.h \
    CForme.h \
    CPolygone.h \
    CRectangle.h
