#include <stdio.h>
#include <math.h>
#include "s21_calc.h"

Credit_output credit(double credit_sum, double time, double procent, Credit_type ct) {
    Credit_output cr;
    procent = procent*0.01;
    if(ct == 0) {
        double m = credit_sum*procent*pow(1+procent, time)/(pow(1+procent, time) - 1);
        m = round(m*100)/100;
        cr.month_pay = (double *)malloc((int)time * sizeof(double));
         for(int i = 0;i < (int)time; i++){
            cr.month_pay[i] = m;
        }
        cr.overpayment = m*time - credit_sum;
        cr.overpayment = round(cr.overpayment*100)/100;
        cr.total = m * time;
        cr.total = round(cr.total*100)/100;
    } else if(ct == 1) {
        double cr_s = credit_sum;
        double x = cr_s/time;
        cr.total = 0;
        cr.month_pay = (double *)malloc((int)time * sizeof(double ));
        for(int i = 0;i < (int)time; i++){
            cr.month_pay[i] = 0;
        }
        for(int i = 0;i < (int)time; i++){
            cr.month_pay[i]=cr_s*(1+procent) - x*(time - i -1);
            cr.month_pay[i] = round(cr.month_pay[i]*100)/100;
            cr_s = cr_s - x;
            cr.total += cr.month_pay[i];
            cr.total = round(cr.total*100)/100;
        }
        cr.overpayment= cr.total - credit_sum;
        cr.overpayment = round(cr.overpayment*100)/100;

    }
    return cr;
}
