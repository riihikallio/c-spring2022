#include <stdio.h>
#include <math.h>
#include "source.h"

void draw_triangle(unsigned int size)
{
    for(unsigned int i = 1; i <= size; i++) {
      for(unsigned int j = 0; j < size - i; j++){
        printf(".");
      }
      for(unsigned int k = 0; k < i; k++){
        printf("#");
      }
      printf("\n");
    }
}
