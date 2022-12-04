#include "dialog.hpp"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);



}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::slot(QString str, double x_min, double x_max)
{
    x.clear();
    y.clear();
    ui->widget->clearGraphs();
    ui->label->setText(str);
    QByteArray ba = ui->label->text().toLocal8Bit();
    char *str_2 = ba.data();
    int valid = validation(str_2);
    double h = (x_max - x_min)/1000;
    if(valid == 1) {
        for(double i = x_min; i< x_max; i += h){
           Stack* Input = NULL;
           Input = parcer(str_2);
           Input = reverceStack(Input);

           Stack* Ready = RePolish(Input);
           Ready = Stack_with_X(Ready, i);
           double result = Calc(Ready);
           x.push_back(i);
           y.push_back(result);
       }
   }
    QPen pen;
    pen.setColor(QColor(220, 20, 60));
    ui->widget->xAxis->setRange(x_min,x_max);
    //ui->widget->yAxis->setRange();
    ui->widget->yAxis->grid()->setVisible(true);
    ui->widget->xAxis->grid()->setVisible(true);
    ui->widget->addGraph()->setPen(pen);
    ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
    ui->widget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 2));
    ui->widget->graph(0)->addData(x , y);
    ui->widget->graph(0)->rescaleAxes(true);
    ui->widget->setInteraction(QCP::iRangeZoom, true);
    ui->widget->setInteraction(QCP::iRangeDrag, true);
    ui->widget->setBackground(QColor(230, 230, 230));
    ui->widget->replot();
}

