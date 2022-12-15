#include "../headers/s21_calc.h"

Stack* RePolish(Stack* Input) {
  Stack* Ready = NULL;
  Stack* Support = NULL;
  int n = CountStack(Input);
  for (int i = 0; i < n; i++) {
    if (Input->pr == 0) {
      Ready = Push(Ready, Input->value, Input->pr, Input->t);
    }
    if (Input->pr > 0 || Input->pr < 0) {
      if (Support == NULL) {
        Support = Push(Support, Input->value, Input->pr, Input->t);
      } else if (Input->pr == -2) {
        while (Support->pr != -1) {
          Ready = Push(Ready, Support->value, Support->pr, Support->t);
          Support = Pop(Support);
        }
        Support = Pop(Support);
      } else if (Input->pr == -1) {
        Support = Push(Support, Input->value, Input->pr, Input->t);
      } else {
        if (Input->pr > Support->pr) {
          Support = Push(Support, Input->value, Input->pr, Input->t);
        } else {
          Ready = Push(Ready, Support->value, Support->pr, Support->t);
          Support = Pop(Support);
          Support = Push(Support, Input->value, Input->pr, Input->t);
        }
      }
    }
     Input = Pop(Input);
  }
  if (Support != NULL) {
    n = CountStack(Support);
    for (int i = 0; i < n; i++) {
      Ready = Push(Ready, Support->value, Support->pr, Support->t);
      Support = Pop(Support);
    }
  }
  Ready = reverceStack(Ready);
  Destroy(Support);
  Destroy(Input);
  return Ready;
}
