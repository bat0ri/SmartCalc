#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QVector>
extern "C" {
#include "s21_calc.h"
#include "stack.h"
}
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QVector<double> x, y;

public slots:
    void slot(QString str, double x_min, double x_max);

};

#endif // DIALOG_H
