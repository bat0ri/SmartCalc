#include "../headers/dialog.hpp"
#include "ui_dialog.h"
#include <algorithm>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QCPTextElement *title = new QCPTextElement(ui->widget);
    title->setText("Smart Calc Graphics");
    title->setFont(QFont("sans", 14, QFont::Bold));
    title->setTextColor(QColor(68, 235, 153));

    ui->widget->plotLayout()->insertRow(0);
    ui->widget->plotLayout()->addElement(0, 0, title);
    ui->widget->legend->setVisible(true);


    QCPTextElement *legendTitle = new QCPTextElement(ui->widget);
    legendTitle->setLayer(ui->widget->legend->layer()); // place text element on same layer as legend, or it ends up below legend
    legendTitle->setText("Grapics");
    legendTitle->setFont(QFont("sans", 10, QFont::Bold));
    ui->widget->legend->insertRow(0);
    ui->widget->legend->addElement(0, 0, legendTitle); // place the text element into the empty cell

    ui->widget->yAxis->grid()->setVisible(true);
    ui->widget->xAxis->grid()->setVisible(true);
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

    QPen pen;
    pen.setColor(QColor(68, 235, 153));
    ui->widget->xAxis->setRange(x_min,x_max);
    ui->widget->yAxis->setRange(x_min, x_max);
    ui->widget->addGraph()->setPen(pen);

    QByteArray ba = str.toLocal8Bit();
    char *str_2 = ba.data();
    int valid = validation(str_2);
    double h = (x_max - x_min)/1000;
    int start = 0;
    double y_nan = 0;
    if(valid == 1) {
        for(double i = x_min; i< x_max; i += h){
           Stack* Input = NULL;
           Input = parcer(str_2);
           Input = reverceStack(Input);

           Stack* Ready = RePolish(Input);
           Ready = Stack_with_X(Ready, i);
           double result = Calc(Ready);
           if(start ==0 ){
               y_nan = result;
               start++;
           }
           if(abs(result-y_nan) > 100){
               ui->widget->graph(0)->addData(NAN, NAN);
           } else {
               ui->widget->graph(0)->addData(i, result);
           }
           y_nan = result;
           //x.push_back(i);
           //y.push_back(result);
       }
   }


    //ui->widget->graph(0)->addData(x , y);
    ui->widget->graph(0)->setName(str);

    ui->widget->setBackground(QColor(29, 38, 51));
    ui->widget->xAxis->setLabelColor(QColor(134, 27, 227));
    ui->widget->xAxis->setTickLabelColor(QColor(255, 255, 255));
    ui->widget->xAxis->setBasePen(QColor(134, 27, 227));
    ui->widget->xAxis->setTickPen(QColor(134, 27, 227));
    ui->widget->xAxis->setSubTickPen(QColor(134, 27, 227));


    ui->widget->yAxis->setLabelColor(QColor(134, 27, 227));
    ui->widget->yAxis->setTickLabelColor(QColor(255, 255, 255));
    ui->widget->yAxis->setBasePen(QColor(134, 27, 227));
    ui->widget->yAxis->setTickPen(QColor(134, 27, 227));
    ui->widget->yAxis->setSubTickPen(QColor(134, 27, 227));

    ui->widget->xAxis->grid()->setSubGridPen (QPen(QColor(13, 141, 217), 1, Qt::DotLine));
    ui->widget->xAxis ->grid()->setPen(QPen(QColor(13, 141, 217), 0.5, Qt::DotLine));

    ui->widget->yAxis->grid()->setSubGridPen (QPen(QColor(13, 141, 217), 1, Qt::DotLine));
    ui->widget->yAxis ->grid()->setPen(QPen(QColor(13, 141, 217), 0.5, Qt::DotLine));

    ui->widget->replot();
    ui->widget->setInteraction(QCP::iRangeZoom,true);
    ui->widget->setInteraction(QCP::iRangeDrag,true);
}

