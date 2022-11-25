#include "s21_calc.h"

void input(char *str) {
  char x;
  int i = 0;
  while (scanf("%c", &x) == 1 && x != '=' && x != '\n' && i < 256) {
    str[i] = (char)x;
    i++;
  }
}

int IsCount(char c) {
  int b = 1;
  if (c <= '9' && c >= '0')
    ;
  else
    b = 0;
  return b;
}
int IsOper(char c) {
  int b = 0;
  if (c == '+' || c == '-')
    b = 1;
  else if (c == '*' || c == '/')
    b = 2;
  else if (c == '^')
    b = 3;
  return b;
}

int IsFun(char c) {
  int b = 0;
  if (c == 'c' || c == 's' || c == 't' || c == 'a' || c == 'l') {
    b = 1;
  }
  return b;
}

int IsCosX(char *str) {
  int b = 0;
  if (strlen(str) >= 4) {
    if (str[0] == 'c' && str[1] == 'o' && str[2] == 's' && str[3] == '(') {
      b = 1;
    }
  }
  return b;
}

int IsSinX(char *str) {
  int b = 0;
  if (strlen(str) >= 4) {
    if (str[0] == 's' && str[1] == 'i' && str[2] == 'n' && str[3] == '(') {
      b = 1;
    }
  }
  return b;
}

int IsTanX(char *str) {
  int b = 0;
  if (strlen(str) >= 4) {
    if (str[0] == 't' && str[1] == 'a' && str[2] == 'n' && str[3] == '(') {
      b = 1;
    }
  }
  return b;
}

int IsLogX(char *str) {
  int b = 0;
  if (strlen(str) >= 4) {
    if (str[0] == 'l' && str[1] == 'o' && str[2] == 'g' && str[3] == '(') {
      b = 1;
    }
  }
  return b;
}

int IsLnX(char *str) {
  int b = 0;
  if (strlen(str) >= 3) {
    if (str[0] == 'l' && str[1] == 'n' && str[2] == '(') {
      b = 1;
    }
  }
  return b;
}

int IsArc(char *str) {
  int b = 0;
  if (strlen(str) >= 4) {
    if (str[0] == 'a') {
      str++;
      if (IsCosX(str) == 1 || IsSinX(str) == 1 || IsTanX(str) == 1) b = 1;
    }
  }
  return b;
}

int IsMod(char *str) {
  int b = 0;
  if (strlen(str) > 3) {
    if (str[0] == 'm' && str[1] == 'o' && str[2] == 'd') b = 1;
  }
  return b;
}
int IsSqrt(char *str) {
  int b = 0;
  if (strlen(str) >= 4) {
    if (str[0] == 's' && str[1] == 'q' && str[2] == 'r' && str[3] == 't') b = 1;
  }
  return b;
}

int validation(char str[]) {
  int b = 1;
  int n = strlen(str);
  char pred = ' ';
  int sk = 0;
  int t = 0;
  for (int i = 0; i < n && b != 0; i++) {
    if (IsCount(str[i]) == 1) {
      if (IsCount(pred) == 1 || IsOper(pred) > 0 || pred == '(' ||
          pred == ' ') {
        pred = str[i];
      } else {
        b = 0;
      }
    } else if (str[i] == '.') {
      if (IsCount(pred) == 1 && t == 0) {
        t++;
      } else
        b = 0;
    } else if (str[i] == 'x') {
      if (IsOper(pred) > 0 || pred == '(' || pred == ' ') {
        pred = 'x';
      } else {
        b = 0;
      }
    } else if (IsOper(str[i]) == 2) {
      if (IsCount(pred) == 1 || pred == ')' || pred == 'x') {
        if (IsCount(pred) == 1 && t == 1) t = 0;
        pred = str[i];
      } else
        b = 0;

    } else if (IsOper(str[i]) == 1) {
      if (IsCount(pred) == 1 || IsOper(pred) == 1 || pred == '(' ||
          pred == ')' || pred == ' ' || pred == 'x') {
        if (IsCount(pred) == 1 && t == 1) t = 0;
        pred = str[i];
      } else
        b = 0;

    } else if (str[i] == '(') {
      if (IsOper(pred) > 0 || pred == ' ' || pred == '(') {
        if (IsCount(pred) == 1 && t == 1) t = 0;
        pred = str[i];
        sk++;
      } else
        b = 0;

    } else if (str[i] == ')') {
      if ((IsCount(pred) == 1 || IsOper(pred) == 1 || pred == ')' ||
           pred == 'x') &&
          sk > 0) {
        if (t == 1) t = 0;
        sk--;
        pred = str[i];
      } else
        b = 0;
    } else if (IsFun(str[i]) == 1 &&
               (IsOper(pred) > 0 || pred == ' ' || pred == '(')) {
      if (IsCosX(&str[i]) == 1 || IsSinX(&str[i]) == 1 ||
          IsTanX(&str[i]) == 1 || IsLogX(&str[i]) == 1) {
        pred = '(';
        sk++;
        i += 3;
      } else if (IsLnX(&str[i]) == 1) {
        pred = '(';
        sk++;
        i += 2;
      } else if (IsArc(&str[i])) {
        pred = '(';
        sk++;
        i += 4;
      } else if (IsSqrt(&str[i]) == 1) {
        pred = '(';
        sk++;
        i += 4;
      } else
        b = 0;
    } else if (IsMod(&str[i]) == 1 && n - i > 3) {
      pred = '/';
      i += 2;
    } else if (str[i] == '^') {
      pred = '^';
    } else
      b = 0;
    //  printf("\tpred: %c\t str[%d]: %c\t  t: %d\tsk: %d\t b:%d\n", pred, i,
    //  str[i], t, sk, b);
  }
  if (sk > 0) b = 0;
  if (IsOper(str[n - 1]) > 0) b = 0;
  return b;
}
