#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dialog.hpp>
#include <QStandardItemModel>

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
    void digits_func();

    void on_pushButton_eq_clicked();

    void on_pushButton_AC_clicked();


    void on_pushButton_clicked();

    void on_pushButton_Del_clicked();

    void on_calc_credit_clicked();


    void on_ann_clicked(bool checked);

    void on_dif_clicked(bool checked);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

private:
    Ui::MainWindow *ui;
    Dialog* plot;
    Credit_type cr_t;
    int time_type_credit;

signals:
    void signal(QString, double, double);
};
#endif // MAINWINDOW_H
