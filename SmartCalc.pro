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
    ./source/credit_calc.c \
    ./source/dialog.cpp \
    ./source/main.cpp \
    ./source/mainwindow.cpp \
    ./qcustomplot/qcustomplot.cpp \
    ./source/validation.c \
    ./source/RPN.c \
    ./source/parcer.c \
    ./source/calculation.c \
    ./source/stack.c

HEADERS += \
    ./headers/dialog.hpp \
    ./headers/mainwindow.h \
    ./qcustomplot/qcustomplot.h \
    ./headers/s21_calc.h \
    ./headers/stack.h
FORMS += \
    ./UI/dialog.ui \
    ./UI/mainwindow.ui

TARGET = SmartCalc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


#RC_ICONS = myappico.ico
#RC_FILE = resourse/untitled_resource.rc
