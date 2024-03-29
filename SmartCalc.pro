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
    ../SmartCalc/source/credit_calc.c \
    ../SmartCalc/source/dialog.cpp \
    ../SmartCalc/source/main.cpp \
    ../SmartCalc/source/mainwindow.cpp \
    ../SmartCalc/qcustomplot/qcustomplot.cpp \
    ../SmartCalc/source/validation.c \
    ../SmartCalc/source/RPN.c \
    ../SmartCalc/source/parcer.c \
    ../SmartCalc/source/calculation.c \
    ../SmartCalc/source/stack.c

HEADERS += \
    ../SmartCalc/headers/dialog.hpp \
    ../SmartCalc/headers/mainwindow.h \
    ../SmartCalc/qcustomplot/qcustomplot.h \
    ../SmartCalc/headers/s21_calc.h \
    ../SmartCalc/headers/stack.h
FORMS += \
    ../SmartCalc/ui/dialog.ui \
    ../SmartCalc/ui/mainwindow.ui

TARGET = SmartCalc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


#RC_ICONS = myappico.ico
#RC_FILE = resourse/untitled_resource.rc
