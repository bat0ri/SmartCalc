/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_sk2;
    QPushButton *pushButton_Del;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_sk1;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_div;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_plus;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_expon;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_log;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sqrt;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_x;
    QPushButton *pushButton_5;
    QLabel *label_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_0;
    QLineEdit *Input_x;
    QLineEdit *xMin;
    QLineEdit *xMax;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *tab_3;
    QTableView *everypay;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QRadioButton *dif;
    QPushButton *calc_credit;
    QRadioButton *ann;
    QLabel *label_6;
    QLineEdit *procent_cre;
    QLineEdit *time_cre;
    QLabel *label_3;
    QLineEdit *sum_cre;
    QLabel *label_7;
    QLabel *label_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QLabel *totalpaycre;
    QLabel *label_10;
    QLabel *overpaycre;
    QWidget *tab_4;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(543, 555);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow\n"
"{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.444, y1:0, x2:0.460056, y2:0.676, stop:0.241573 rgba(13, 128, 217, 255), stop:0.994382 rgba(29, 38, 51, 255));\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 551, 561));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane\n"
"{\n"
"	border: 1px;\n"
"	background: transparent;\n"
"}\n"
"QTabBar::tab \n"
"{\n"
"	color:#44eb99\n"
"	background-color: transparent;\n"
"}\n"
"QTabBar::tab::selected\n"
"{\n"
"	text-decoration: underline;\n"
"	background-color: #1d2633;\n"
"}\n"
"QTabBar::tab::hover\n"
"{\n"
"	text-decoration: underline;\n"
"	background-color: #1d332b;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        QFont font;
        font.setPointSize(11);
        tab->setFont(font);
        gridLayoutWidget_3 = new QWidget(tab);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(370, 200, 168, 321));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_AC = new QPushButton(gridLayoutWidget_3);
        pushButton_AC->setObjectName("pushButton_AC");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_AC->sizePolicy().hasHeightForWidth());
        pushButton_AC->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton_AC->setFont(font1);
        pushButton_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(68, 235, 153);\n"
"\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"border-radius: 15px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));

        gridLayout_3->addWidget(pushButton_AC, 4, 0, 1, 1);

        pushButton_sk2 = new QPushButton(gridLayoutWidget_3);
        pushButton_sk2->setObjectName("pushButton_sk2");
        sizePolicy.setHeightForWidth(pushButton_sk2->sizePolicy().hasHeightForWidth());
        pushButton_sk2->setSizePolicy(sizePolicy);
        pushButton_sk2->setFont(font1);
        pushButton_sk2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_sk2, 6, 1, 1, 1);

        pushButton_Del = new QPushButton(gridLayoutWidget_3);
        pushButton_Del->setObjectName("pushButton_Del");
        sizePolicy.setHeightForWidth(pushButton_Del->sizePolicy().hasHeightForWidth());
        pushButton_Del->setSizePolicy(sizePolicy);
        pushButton_Del->setFont(font1);
        pushButton_Del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  \n"
"	background-color: rgb(68, 235, 153);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"border-radius: 15px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"\n"
""));

        gridLayout_3->addWidget(pushButton_Del, 4, 1, 1, 1);

        pushButton_mult = new QPushButton(gridLayoutWidget_3);
        pushButton_mult->setObjectName("pushButton_mult");
        sizePolicy.setHeightForWidth(pushButton_mult->sizePolicy().hasHeightForWidth());
        pushButton_mult->setSizePolicy(sizePolicy);
        pushButton_mult->setFont(font1);
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_mult, 9, 0, 1, 1);

        pushButton_eq = new QPushButton(gridLayoutWidget_3);
        pushButton_eq->setObjectName("pushButton_eq");
        sizePolicy.setHeightForWidth(pushButton_eq->sizePolicy().hasHeightForWidth());
        pushButton_eq->setSizePolicy(sizePolicy);
        pushButton_eq->setFont(font1);
        pushButton_eq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #f1a700;\n"
"  border: 1px solid #f1a700;\n"
" border-radius: 15px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_3->addWidget(pushButton_eq, 11, 0, 1, 2);

        pushButton_dot = new QPushButton(gridLayoutWidget_3);
        pushButton_dot->setObjectName("pushButton_dot");
        sizePolicy.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy);
        pushButton_dot->setFont(font1);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_dot, 7, 1, 1, 1);

        pushButton_sk1 = new QPushButton(gridLayoutWidget_3);
        pushButton_sk1->setObjectName("pushButton_sk1");
        sizePolicy.setHeightForWidth(pushButton_sk1->sizePolicy().hasHeightForWidth());
        pushButton_sk1->setSizePolicy(sizePolicy);
        pushButton_sk1->setFont(font1);
        pushButton_sk1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_sk1, 6, 0, 1, 1);

        pushButton_mod = new QPushButton(gridLayoutWidget_3);
        pushButton_mod->setObjectName("pushButton_mod");
        sizePolicy.setHeightForWidth(pushButton_mod->sizePolicy().hasHeightForWidth());
        pushButton_mod->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(12);
        font2.setBold(false);
        pushButton_mod->setFont(font2);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_mod, 7, 0, 1, 1);

        pushButton_div = new QPushButton(gridLayoutWidget_3);
        pushButton_div->setObjectName("pushButton_div");
        sizePolicy.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy);
        pushButton_div->setFont(font1);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_div, 9, 1, 1, 1);

        pushButton_minus = new QPushButton(gridLayoutWidget_3);
        pushButton_minus->setObjectName("pushButton_minus");
        sizePolicy.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy);
        pushButton_minus->setFont(font1);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_minus, 8, 1, 1, 1);

        pushButton_plus = new QPushButton(gridLayoutWidget_3);
        pushButton_plus->setObjectName("pushButton_plus");
        sizePolicy.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy);
        pushButton_plus->setFont(font1);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_plus, 8, 0, 1, 1);

        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 10, 541, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font3.setPointSize(16);
        font3.setBold(false);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : rgb(195, 195, 195)"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font4.setPointSize(20);
        font4.setBold(true);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : rgb(255, 255, 255)"));

        verticalLayout->addWidget(label_2);

        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 200, 131, 321));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_tan = new QPushButton(gridLayoutWidget_2);
        pushButton_tan->setObjectName("pushButton_tan");
        sizePolicy.setHeightForWidth(pushButton_tan->sizePolicy().hasHeightForWidth());
        pushButton_tan->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI")});
        font5.setPointSize(13);
        font5.setBold(false);
        font5.setItalic(false);
        pushButton_tan->setFont(font5);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_tan, 2, 0, 1, 1);

        pushButton_expon = new QPushButton(gridLayoutWidget_2);
        pushButton_expon->setObjectName("pushButton_expon");
        sizePolicy.setHeightForWidth(pushButton_expon->sizePolicy().hasHeightForWidth());
        pushButton_expon->setSizePolicy(sizePolicy);
        pushButton_expon->setFont(font5);
        pushButton_expon->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_expon, 4, 1, 1, 1);

        pushButton_acos = new QPushButton(gridLayoutWidget_2);
        pushButton_acos->setObjectName("pushButton_acos");
        sizePolicy.setHeightForWidth(pushButton_acos->sizePolicy().hasHeightForWidth());
        pushButton_acos->setSizePolicy(sizePolicy);
        pushButton_acos->setFont(font5);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_acos, 1, 1, 1, 1);

        pushButton_log = new QPushButton(gridLayoutWidget_2);
        pushButton_log->setObjectName("pushButton_log");
        sizePolicy.setHeightForWidth(pushButton_log->sizePolicy().hasHeightForWidth());
        pushButton_log->setSizePolicy(sizePolicy);
        pushButton_log->setFont(font5);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_log, 3, 0, 1, 1);

        pushButton_atan = new QPushButton(gridLayoutWidget_2);
        pushButton_atan->setObjectName("pushButton_atan");
        sizePolicy.setHeightForWidth(pushButton_atan->sizePolicy().hasHeightForWidth());
        pushButton_atan->setSizePolicy(sizePolicy);
        pushButton_atan->setFont(font5);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_atan, 2, 1, 1, 1);

        pushButton_sin = new QPushButton(gridLayoutWidget_2);
        pushButton_sin->setObjectName("pushButton_sin");
        sizePolicy.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy);
        pushButton_sin->setFont(font5);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_sin, 0, 0, 1, 1);

        pushButton_ln = new QPushButton(gridLayoutWidget_2);
        pushButton_ln->setObjectName("pushButton_ln");
        sizePolicy.setHeightForWidth(pushButton_ln->sizePolicy().hasHeightForWidth());
        pushButton_ln->setSizePolicy(sizePolicy);
        pushButton_ln->setFont(font5);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_ln, 3, 1, 1, 1);

        pushButton_asin = new QPushButton(gridLayoutWidget_2);
        pushButton_asin->setObjectName("pushButton_asin");
        sizePolicy.setHeightForWidth(pushButton_asin->sizePolicy().hasHeightForWidth());
        pushButton_asin->setSizePolicy(sizePolicy);
        pushButton_asin->setFont(font5);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_asin, 0, 1, 1, 1);

        pushButton_cos = new QPushButton(gridLayoutWidget_2);
        pushButton_cos->setObjectName("pushButton_cos");
        sizePolicy.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy);
        pushButton_cos->setFont(font5);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_cos, 1, 0, 1, 1);

        pushButton_sqrt = new QPushButton(gridLayoutWidget_2);
        pushButton_sqrt->setObjectName("pushButton_sqrt");
        sizePolicy.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy);
        pushButton_sqrt->setFont(font5);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_sqrt, 4, 0, 1, 1);

        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(150, 200, 211, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_3, 7, 3, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_9, 4, 3, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_2, 7, 2, 1, 1);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_1, 7, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_7, 4, 1, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_6, 6, 3, 1, 1);

        pushButton_x = new QPushButton(gridLayoutWidget);
        pushButton_x->setObjectName("pushButton_x");
        sizePolicy.setHeightForWidth(pushButton_x->sizePolicy().hasHeightForWidth());
        pushButton_x->setSizePolicy(sizePolicy);
        pushButton_x->setFont(font1);
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_x, 8, 1, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_5, 6, 2, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setStyleSheet(QString::fromUtf8(""));
        label_9->setPixmap(QPixmap(QString::fromUtf8("11.png")));

        gridLayout->addWidget(label_9, 8, 3, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_4, 6, 1, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_8, 4, 2, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName("pushButton_0");
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setFont(font1);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:  transparent;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"	border: 2px solid #861be3;\n"
"	border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_0, 8, 2, 1, 1);

        Input_x = new QLineEdit(tab);
        Input_x->setObjectName("Input_x");
        Input_x->setGeometry(QRect(190, 140, 81, 31));
        Input_x->setStyleSheet(QString::fromUtf8("background-color:  transparent;\n"
"border: 2px solid #1d2633;\n"
" border-radius:  15px;\n"
"color: white;\n"
"\n"
" qproperty-alignment: 'AlignVCenter | AlignRight';\n"
""));
        xMin = new QLineEdit(tab);
        xMin->setObjectName("xMin");
        xMin->setGeometry(QRect(280, 140, 81, 31));
        xMin->setStyleSheet(QString::fromUtf8("background-color:  transparent;\n"
"border: 2px solid #1d2633;\n"
" border-radius:  15px;\n"
"color: white;\n"
""));
        xMax = new QLineEdit(tab);
        xMax->setObjectName("xMax");
        xMax->setGeometry(QRect(370, 140, 81, 31));
        xMax->setStyleSheet(QString::fromUtf8("background-color:  transparent;\n"
"border: 2px solid #1d2633;\n"
" border-radius:  15px;\n"
"color: white;\n"
""));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(458, 144, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #861be3;\n"
"color:white;"));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(193, 163, 49, 16));
        QFont font6;
        font6.setItalic(true);
        font6.setUnderline(true);
        label_4->setFont(font6);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(241, 167, 0);"));
        label_11 = new QLabel(tab);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(330, 163, 49, 16));
        label_11->setFont(font6);
        label_11->setStyleSheet(QString::fromUtf8("color:rgb(241, 167, 0);"));
        label_12 = new QLabel(tab);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(420, 163, 49, 16));
        label_12->setFont(font6);
        label_12->setStyleSheet(QString::fromUtf8("color:rgb(241, 167, 0);"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        everypay = new QTableView(tab_3);
        everypay->setObjectName("everypay");
        everypay->setGeometry(QRect(6, 220, 531, 301));
        everypay->setStyleSheet(QString::fromUtf8("border: 1px solid #861be3;\n"
"   background-color:#1d2b33;\n"
"   border-radius:  15px;\n"
"	color: white"));
        gridLayoutWidget_4 = new QWidget(tab_3);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(70, 10, 381, 176));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        dif = new QRadioButton(gridLayoutWidget_4);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName("buttonGroup_2");
        buttonGroup_2->addButton(dif);
        dif->setObjectName("dif");

        gridLayout_4->addWidget(dif, 3, 0, 1, 1);

        calc_credit = new QPushButton(gridLayoutWidget_4);
        calc_credit->setObjectName("calc_credit");
        sizePolicy.setHeightForWidth(calc_credit->sizePolicy().hasHeightForWidth());
        calc_credit->setSizePolicy(sizePolicy);
        calc_credit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #f1a700;\n"
"  border: 1px solid #f1a700;\n"
" border-radius: 9px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_4->addWidget(calc_credit, 5, 0, 1, 3);

        ann = new QRadioButton(gridLayoutWidget_4);
        buttonGroup_2->addButton(ann);
        ann->setObjectName("ann");

        gridLayout_4->addWidget(ann, 4, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_4);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setPointSize(9);
        label_6->setFont(font7);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        gridLayout_4->addWidget(label_6, 0, 2, 1, 1);

        procent_cre = new QLineEdit(gridLayoutWidget_4);
        procent_cre->setObjectName("procent_cre");
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(procent_cre->sizePolicy().hasHeightForWidth());
        procent_cre->setSizePolicy(sizePolicy1);
        procent_cre->setStyleSheet(QString::fromUtf8("background-color:  transparent;\n"
"border: 2px solid #1d2633;\n"
" border-radius:  10px;\n"
"color: white;\n"
""));

        gridLayout_4->addWidget(procent_cre, 1, 2, 1, 1);

        time_cre = new QLineEdit(gridLayoutWidget_4);
        time_cre->setObjectName("time_cre");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(time_cre->sizePolicy().hasHeightForWidth());
        time_cre->setSizePolicy(sizePolicy2);
        time_cre->setStyleSheet(QString::fromUtf8("background-color:  transparent;\n"
"border: 2px solid #1d2633;\n"
" border-radius:  10px;\n"
"color: white;\n"
""));

        gridLayout_4->addWidget(time_cre, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_4);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setFont(font7);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        sum_cre = new QLineEdit(gridLayoutWidget_4);
        sum_cre->setObjectName("sum_cre");
        sizePolicy1.setHeightForWidth(sum_cre->sizePolicy().hasHeightForWidth());
        sum_cre->setSizePolicy(sizePolicy1);
        sum_cre->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color:  transparent;\n"
"border: 2px solid #1d2633;\n"
" border-radius:  10px;\n"
"color: white;\n"
"}\n"
"QLineEdit :focus {\n"
"border: 2px solid  #861be3;\n"
"	background-color:  #1d2b33;\n"
" border-radius:  5px;\n"
"}\n"
"QLineEdit :hover {\n"
"	background-color:  #1d2b33;\n"
" border-radius:  5px;\n"
"}\n"
""));

        gridLayout_4->addWidget(sum_cre, 1, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_4);
        label_7->setObjectName("label_7");
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setFont(font7);
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        gridLayout_4->addWidget(label_7, 2, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_4);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font7);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"}"));

        gridLayout_4->addWidget(label_5, 0, 1, 1, 1);

        radioButton = new QRadioButton(gridLayoutWidget_4);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName("radioButton");

        gridLayout_4->addWidget(radioButton, 2, 1, 1, 1);

        radioButton_2 = new QRadioButton(gridLayoutWidget_4);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName("radioButton_2");

        gridLayout_4->addWidget(radioButton_2, 3, 1, 1, 1);

        gridLayoutWidget_5 = new QWidget(tab_3);
        gridLayoutWidget_5->setObjectName("gridLayoutWidget_5");
        gridLayoutWidget_5->setGeometry(QRect(70, 190, 381, 31));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(gridLayoutWidget_5);
        label_8->setObjectName("label_8");
        QFont font8;
        font8.setPointSize(10);
        label_8->setFont(font8);

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        totalpaycre = new QLabel(gridLayoutWidget_5);
        totalpaycre->setObjectName("totalpaycre");
        totalpaycre->setFont(font8);

        gridLayout_5->addWidget(totalpaycre, 0, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_5);
        label_10->setObjectName("label_10");
        label_10->setFont(font8);

        gridLayout_5->addWidget(label_10, 0, 2, 1, 1);

        overpaycre = new QLabel(gridLayoutWidget_5);
        overpaycre->setObjectName("overpaycre");
        overpaycre->setFont(font8);

        gridLayout_5->addWidget(overpaycre, 0, 3, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SmartCalc", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_sk2->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_Del->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_sk1->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(whatsthis)
        label->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Input</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QString());
#if QT_CONFIG(whatsthis)
        label_2->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Result</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QString());
        gridLayoutWidget_2->setStyleSheet(QCoreApplication::translate("MainWindow", "QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_expon->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_9->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Input_x->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        xMin->setText(QCoreApplication::translate("MainWindow", "-100", nullptr));
        xMax->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "X value", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "X min", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "X max", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Default", nullptr));
        dif->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\204", nullptr));
        calc_credit->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        ann->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\320\275\321\202\320\275\321\213\320\271", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Procent", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Credit ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "month", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "year", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Total payments", nullptr));
        totalpaycre->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Over payments", nullptr));
        overpaycre->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Credit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Deposit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
