#include "../headers/mainwindow.h"
#include "../ui_mainwindow.h"

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
    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(digits_func()));
    connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(digits_func()));
    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(digits_func()));
    connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(digits_func()));
    connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(digits_func()));
    connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(digits_func()));
    connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(digits_func()));
    connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(digits_func()));
    connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(digits_func()));
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
void MainWindow::digits_func()
{
    QPushButton *button = (QPushButton*)sender();
    QString all_numbers;
    all_numbers = (ui->label->text() + button->text() + "(");

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
    if(ui->label->text().size() > 0) {
        double x_min = ui->xMin->text().toDouble();
        double x_max = ui->xMax->text().toDouble();
        QByteArray ba = ui->label->text().toLocal8Bit();
        char *str_2 = ba.data();
        if(validation(str_2)){
            emit signal(ui->label->text(), x_min, x_max);
            plot->setWindowTitle("Graphic View");
            plot->show();
        } else {
            ui->label_2->setText("INVALID Func");
        }
    }
}


void MainWindow::on_pushButton_Del_clicked()
{
    QString text = ui->label->text();
    int n = text.size()-1;
    if(text[n] == 'n' or text[n] == 's' or text[n] == 'g' or text[n] == 't' or text[n] == 'd'){
        n -=1;
        if(text[n] == 'l'){
            text.chop(2);
        } else if((text[n] == 'i' || text[n] == 'o' || text[n]=='a') && (text[n-1] == 'c' || text[n-1] == 't' || text[n-1] == 's')) {
            text.chop(3);
            n -=2;
            if(n > -1 && text[n]=='a'){
                text.chop(1);
            }
        } else if(text[n] == 'r'){
            text.chop(4);
        } else if(text[n] == 'o' && (text[n-1] == 'm' || text[n-1] == 'l')){
            text.chop(3);
        }

    } else {
        text.chop(1);
    }

    ui->label->setText(text);
}


void MainWindow::on_calc_credit_clicked()
{
    double credit_sum = ui->sum_cre->text().toDouble();
    double time = ui->time_cre->text().toDouble();
    double procent = ui->procent_cre->text().toDouble();
    procent = procent/12;
    if(time_type_credit == 2) {
        time = time*12;
    }
    if(cr_t == diff || cr_t == annuent){
        Credit_output res = credit(credit_sum, time, procent, cr_t);
        ui->totalpaycre->setText(QString::number(res.total, 'g', 15));
        ui->overpaycre->setText(QString::number(res.overpayment, 'g', 15));
        QStandardItemModel *table = new QStandardItemModel(int(time), 2, this);
        ui->everypay->setModel(table);
        QModelIndex index;
        double s = credit_sum;
        for(int row = 0; row < table->rowCount(); row++) {
            s *= (1+procent/100);
            s = round(s*100)/100;
            index = table->index(row, 0);
            table->setData(index, s);
            s -= res.month_pay[row];
            index = table->index(row, 1);
            table->setData(index, res.month_pay[row]);
        }
        table->setHeaderData(0, Qt::Horizontal, "Total");
        table->setHeaderData(1, Qt::Horizontal, "Pay");
        ui->everypay->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color: #1d2b33;}");
        ui->everypay->verticalHeader()->setStyleSheet("QHeaderView::section { background-color: #1d2b33;}");
        ui->everypay->horizontalHeader()->setSectionResizeMode(QHeaderView :: Stretch);
    }
}





void MainWindow::on_ann_clicked(bool checked)
{
    cr_t = annuent;
}


void MainWindow::on_dif_clicked(bool checked)
{
    cr_t = diff;

}


void MainWindow::on_radioButton_clicked()
{
    time_type_credit = 1;
}


void MainWindow::on_radioButton_2_clicked()
{
    time_type_credit = 2;
}

