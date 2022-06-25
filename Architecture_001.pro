QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    class_001.cpp \
    class_002.cpp \
    funcblock_001.cpp \
    funcblock_002.cpp \
    main.cpp \
    mainwindow.cpp \
    variables.cpp

HEADERS += \
    class_001.h \
    class_002.h \
    constants.h \
    funcblock_001.h \
    funcblock_002.h \
    mainwindow.h \
    variables.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
