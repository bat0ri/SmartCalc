#include "../headers/s21_calc.h"

Stack* parcer(char* str) {
  Stack* st = NULL;
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (IsCount(str[i]) == 1) {
      int start = i;
      while (IsOper(str[i + 1]) == 0 && IsFun(str[i + 1]) == 0 &&
             IsMod(&str[i + 1]) != 1 && str[i + 1] != ')' &&
             str[i + 1] != '\0') {
        i++;
      }
      char* tmp = (char*)malloc(sizeof(char) * (i - start + 1));
      for (int k = 0; k < i - start + 1; k++) {
        tmp[k] = str[start + k];
      }
      double t = atof(tmp);
      st = Push(st, t, 0, s21_number);
      free(tmp);
      tmp = NULL;
    } else if (str[i] == '+') {
      if (st->pr == -1 || i == 0) st = Push(st, 0, 0, s21_number);
      st = Push(st, 0, 1, s21_plus);
    } else if (str[i] == '-') {
      if (st->pr == -1 || i == 0) st = Push(st, 0, 0, s21_number);
      st = Push(st, 0, 1, s21_minus);
    } else if (str[i] == '*') {
      st = Push(st, 0, 2, s21_mult);
    } else if (str[i] == '/') {
      st = Push(st, 0, 2, s21_division);
    } else if (IsMod(&str[i]) == 1) {
      st = Push(st, 0, 2, s21_mod);
      i += 2;
    } else if (str[i] == '^') {
      st = Push(st, 0, 3, s21_expon);
    } else if (str[i] == 'x') {
      st = Push(st, 0, 0, s21_x);
    } else if (str[i] == '(') {
      st = Push(st, 0, -1, sk);
    } else if (str[i] == ')') {
      st = Push(st, 0, -2, sk);
    } else if (IsFun(str[i]) == 1) {
      if (IsCosX(&str[i]) == 1) {
        st = Push(st, 0, 4, s21_cos);
        i += 2;
      } else if (IsSinX(&str[i]) == 1) {
        st = Push(st, 0, 4, s21_sin);
        i += 2;
      } else if (IsTanX(&str[i]) == 1) {
        st = Push(st, 0, 4, s21_tan);
        i += 2;
      } else if (IsLogX(&str[i]) == 1) {
        st = Push(st, 0, 4, s21_log);
        i += 2;
      } else if (IsLnX(&str[i]) == 1) {
        st = Push(st, 0, 4, s21_ln);
        i += 1;
      } else if (IsArc(&str[i]) == 1) {
        i++;
        if (IsCosX(&str[i]) == 1) {
          st = Push(st, 0, 4, s21_acos);
          i += 2;
        } else if (IsSinX(&str[i]) == 1) {
          st = Push(st, 0, 4, s21_asin);
          i += 2;
        } else if (IsTanX(&str[i]) == 1) {
          st = Push(st, 0, 4, s21_atan);
          i += 2;
        }
      } else if (IsSqrt(&str[i]) == 1) {
        st = Push(st, 0, 4, s21_sqrt);
        i += 3;
      }
    }
  }
  return st;
}
