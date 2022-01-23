#include "source.h"

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void ascii_chart(char min, char max)
{
  for(char i = min; i <= max; ) {
    for(char j = 0; j < 4 && i <= max; j++, i++) {
      printf("%3d 0x%02x %c", i, i, (isprint(i) ? i : '?'));
      if (j < 3) printf("\t");
    }
    printf("\n");
  }
}
