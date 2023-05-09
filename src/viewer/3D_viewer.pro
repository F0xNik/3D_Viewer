QT       += core gui opengl openglwidgets #openglwidgets#opengl#core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#
DEFINES += QT_DEPRECATED_WARNINGS#BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.C \
    mainscene.cpp \
    mainwindow.C \
    ../parser.c

HEADERS += \
    mainscene.h \
    mainwindow.h \
    ../parser.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

include(QtGifImage/src/gifimage/qtgifimage.pri)
