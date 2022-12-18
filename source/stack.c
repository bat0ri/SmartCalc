#include "../headers/stack.h"
// Создание одного элемента без привязки
Stack* Init(double value, int pr, Type t) {
  Stack* tmp = (Stack*)malloc(sizeof(Stack));
  tmp->value = value;
  tmp->pr = pr;
  tmp->next = NULL;
  tmp->t = t;
  return tmp;
}
// Добавление в стек
Stack* Push(Stack* top, double value, int pr, Type t) {
  Stack* tmp = top;
  top = Init(value, pr, t);
  top->next = tmp;
  return top;
}
// Кол-во стека
int CountStack(Stack* top) {
  int b = 0;
  Stack* tmp;
  if (top != NULL) {
    for (tmp = top; tmp != NULL; tmp = tmp->next) {
      b++;
    }
    free(tmp);
  }
  return b;
}
// Удаление верхушки
Stack* Pop(Stack* top) {
  Stack* temp;
  if (top == NULL)
    top = NULL;
  else {
    temp = top;
    top = top->next;
    free(temp);
  }
  return top;
}
// Удаление всего стека
Stack* Destroy(Stack* top) {
  int n = CountStack(top);
  for (int i = 0; i < n; i++) {
    top = Pop(top);
  }
  return top;
}
// Переворачивает стек
Stack* reverceStack(Stack* top) {
  Stack* tmp = NULL;
  int n = CountStack(top);
  for (int i = 0; i < n; i++) {
    tmp = Push(tmp, top->value, top->pr, top->t);
    top = Pop(top);
  }
  return tmp;
}
