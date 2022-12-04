#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    plot = new Dialog;
    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_mult, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_dot, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_sk1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_sk2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_expon, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(digits_numbers()));

    connect(this, &MainWindow::signal, plot, &Dialog::slot);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *button = (QPushButton*)sender();
    QString all_numbers;
    all_numbers = (ui->label->text() + button->text());

    ui->label->setText(all_numbers);

}


void MainWindow::on_pushButton_eq_clicked()
{
    QByteArray ba = ui->label->text().toLocal8Bit();
    char *str = ba.data();
    int valid = validation(str);
    if(valid == 1) {
        Stack* Input = NULL;
        Input = parcer(str);
        Input = reverceStack(Input);

        Stack* Ready = RePolish(Input);
        double x = ui->Input_x->text().toDouble();
        Ready = Stack_with_X(Ready, x);
        double result = Calc(Ready);
        QString res = QString::number(result, 'g', 15);
        ui->label_2->setText(res);

    } else {
        ui->label_2->setText("INVALID INPUT");
    }
}


void MainWindow::on_pushButton_AC_clicked()
{
    ui->label->setText("");
    ui->label_2->setText("");
}




void MainWindow::on_pushButton_clicked()
{
    double x_min = ui->xMin->text().toDouble();
    double x_max = ui->xMax->text().toDouble();
    emit signal(ui->label->text(), x_min, x_max);
    plot->show();
}


void MainWindow::on_pushButton_Del_clicked()
{
    QString text = ui->label->text();
    text.chop(1);

    ui->label->setText(text);
}

