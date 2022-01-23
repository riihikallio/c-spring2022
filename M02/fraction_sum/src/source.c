# include <stdio.h>
# include "source.h"

double fracsum(int x, int y, int a, int b) {
  double xy = (double) x / (double) y;
  double ab = (double) a / (double) b;
  return xy + ab;
}