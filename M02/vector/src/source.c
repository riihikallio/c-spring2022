#include <math.h>
#include <stdio.h>

double vectorlength(double x, double y, double z) {
  double len = sqrt(x * x + y * y + z * z);
  return len;
}
