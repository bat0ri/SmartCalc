#include "../headers/mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("SmartCalc");
    w.show();
    return a.exec();
}
