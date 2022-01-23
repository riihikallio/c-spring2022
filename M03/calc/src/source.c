#include "source.h"

#include <math.h>
#include <stdio.h>

void simple_math(void)
{
  int ret = 0;
  float a = 0.0, b = 0.0;
  char op = 0;

  ret = scanf("%f %c %f", &a, &op, &b);

  if (ret != 3) {
    printf("ERR\n");
  } else {
    switch(op) {
      case '+':
        printf("%.1f\n", a + b);
        break;
      case '-':
        printf("%.1f\n", a - b);
        break;
      case '*':
         printf("%.1f\n", a * b);
        break;
     case '/':
        if (b != 0) {
          printf("%.1f\n", a / b);
        } else {
          printf("ERR\n");
        }
        break;
      default :
        printf("ERR\n");
    }
  }
}