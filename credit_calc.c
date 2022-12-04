#include <stdio.h>
#include <math.h>
#include "s21_calc.h"

Credit_output credit(double credit_sum, double time, double procent, Credit_type ct) {
    Credit_output cr;
    procent = procent*0.01/12;
    if(ct == 0) {
        cr.month_pay = credit_sum*procent*pow(1+procent, time)/(pow(1+procent, time) - 1);
        cr.month_pay = round(cr.month_pay*100)/100;
        cr.overpayment = cr.month_pay*time - credit_sum;
        cr.overpayment = round(cr.overpayment*100)/100;
        cr.total = cr.month_pay * time;
        cr.total = round(cr.total*100)/100;
    }
    return cr;
}
