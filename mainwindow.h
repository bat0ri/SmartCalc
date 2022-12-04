#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dialog.hpp>

extern "C" {
#include "s21_calc.h"
#include "stack.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void digits_numbers();

    void on_pushButton_eq_clicked();

    void on_pushButton_AC_clicked();


    void on_pushButton_clicked();

    void on_pushButton_Del_clicked();

private:
    Ui::MainWindow *ui;
    Dialog* plot;

signals:
    void signal(QString, double, double);
};
#endif // MAINWINDOW_H
