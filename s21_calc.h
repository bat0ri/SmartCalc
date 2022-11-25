#ifndef SRC_S21_CALC_H_
#define SRC_S21_CALC_H_

#include "stack.h"
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

#endif  // SRC_S21_CALC_H_