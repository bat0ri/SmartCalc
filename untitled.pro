QT       += core gui printsupport
#QT       += widget
greaterThan(QT_MAJOR_VERSION,(X= QT_MAJOR_VERSION - 1)): QT += widgets

QMAKE_CFLAGS_WARN_ON -= -Wextra
QMAKE_CXXFLAGS_WARN_ON -= -Wextra
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    credit_calc.c \
    dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    validation.c \
    RPN.c \
    parcer.c \
    calculation.c \
    stack.c

HEADERS += \
    dialog.hpp \
    mainwindow.h \
    qcustomplot.h \
    s21_calc.h \
    stack.h
FORMS += \
    dialog.ui \
    mainwindow.ui

TARGET = SmartCalc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


#RC_ICONS = myappico.ico
RC_FILE = untitled_resource.rc
