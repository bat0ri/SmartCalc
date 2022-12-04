#ifndef SRC_S21_CALC_H_
#define SRC_S21_CALC_H_

#include "stack.h"

typedef struct credit
{
    double month_pay;
    double overpayment;
    double total;
} Credit_output;

 typedef enum
 {
    annuent,
    diff
 } Credit_type;

// VALIDATION
void input(char str[]);
int validation(char str[]);

// HELP FUNC
// Проверка на число
int IsCount(char c);
// Проверка на операторы
int IsOper(char c);
int IsFun(char c);
int IsCosX(char *str);
int IsSinX(char *str);
int IsLogX(char *str);
int IsLnX(char *str);
int IsArc(char *str);
int IsMod(char *str);
int IsLnX(char *str);
int IsTanX(char *str);
int IsSqrt(char *str);

Stack* parcer(char* str);
Stack* RePolish(Stack* Input);
Stack* Stack_with_X(Stack* Ready, double x);
double Calc(Stack* Ready);
Credit_output credit(double credit_sum, double time, double procent, Credit_type ct);
#endif  // SRC_S21_CALC_H_
