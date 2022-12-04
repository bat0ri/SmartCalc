#ifndef SRC_STACK_H_
#define SRC_STACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum {
  s21_x = 0,
  s21_number = 1,
  // pr = 1
  s21_plus = 2,
  s21_minus = 3,
  // pr = 2
  s21_mult = 4,
  s21_division = 5,
  s21_mod = 6,
  // pr = 3
  s21_expon = 7,
  // pr = 4
  s21_sin = 8,
  s21_cos = 9,
  s21_tan = 10,
  s21_asin,
  s21_acos,
  s21_atan,
  s21_sqrt,
  s21_ln,
  s21_log,

  sk
} Type;

typedef struct stack {
  double value;
  int pr;
  struct stack* next;
  Type t;
} Stack;

Stack* Push(Stack* top, double value, int pr, Type t);
Stack* Pop(Stack* head);
Stack* Destroy(Stack* top);
Stack Top(Stack* top);
void Show(Stack* top);
int CountStack(Stack* top);
Stack* reverceStack(Stack* top);
Stack* CopyStack(Stack* top);

#endif  // SRC_STACK_H_