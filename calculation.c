#include <math.h>
#include "s21_calc.h"

Stack* Stack_with_X(Stack* Ready, double x) {
  Stack* tmp = NULL;
  int n = CountStack(Ready);
  for (int i = 0; i < n; i++) {
    if (Ready->t == 0) {
      tmp = Push(tmp, x, 0, s21_number);
    } else {
      tmp = Push(tmp, Ready->value, Ready->pr, Ready->t);
    }
    Ready = Pop(Ready);
  }
  tmp = reverceStack(tmp);
  return tmp;
}

double Calc(Stack* Ready) {
  double result = 0;
  Stack* Support = NULL;
  int n = CountStack(Ready);
  int b = 1;
  for (int i = 0; i < n && b == 1; i++) {
    if (Ready->pr == 0) {
      Support = Push(Support, Ready->value, 0, s21_number);
    } else if (Ready->pr == 1) {
      if (Ready->t == s21_plus) {
        double tmp = Support->value;
        Support = Pop(Support);
        Support->value += tmp;
      } else if (Ready->t == s21_minus) {
        double tmp = Support->value;
        Support = Pop(Support);
        Support->value -= tmp;
      }
    } else if (Ready->pr == 2) {
      if (Ready->t == s21_mult) {
        double tmp = Support->value;
        Support = Pop(Support);
        Support->value = tmp * Support->value;
      } else if (Ready->t == s21_division) {
        double tmp = Support->value;
        Support = Pop(Support);
        if (tmp != 0) {
          Support->value = Support->value / tmp;
        } else {
          b = 0;
        }
      } else if (Ready->t == s21_mod) {
        double tmp = Support->value;
        Support = Pop(Support);
        if (tmp != 0) {
          Support->value = fmod(Support->value, tmp);
        } else {
          b = 0;
        }
      }
    } else if (Ready->pr == 3) {
      double tmp1 = Support->value;
      Support = Pop(Support);
      Support->value = pow(Support->value, tmp1);
    } else if (Ready->pr == 4) {
      if (Ready->t == s21_sin) {
        Support->value = sin(Support->value);
      } else if (Ready->t == s21_cos) {
        Support->value = cos(Support->value);
      } else if (Ready->t == s21_tan) {
        Support->value = tan(Support->value);
      } else if (Ready->t == s21_asin) {
        Support->value = asin(Support->value);
      } else if (Ready->t == s21_acos) {
        Support->value = acos(Support->value);
      } else if (Ready->t == s21_atan) {
        Support->value = atan(Support->value);
      } else if (Ready->t == s21_ln) {
        Support->value = log(Support->value);
      } else if (Ready->t == s21_log) {
        Support->value = log10(Support->value);
      } else if (Ready->t == s21_sqrt) {
        Support->value = sqrt(Support->value);
      }
    }
    Ready = Pop(Ready);
  }
  result = (double)Support->value;
  Destroy(Support);
  return result;
}

//int main(void) {

//  char str[256];
//  input(str);

//  if (validation(str) == 1) {
//    Stack* Input = NULL;
//    Input = parcer(str);
//    Input = reverceStack(Input);
    
//    Stack* Ready = RePolish(Input);
//    double result = Calc(Ready);

//    printf("%lf\n", result);
//  } else {
//    printf("VALID_ERROR\n");
//  }
  
//}
