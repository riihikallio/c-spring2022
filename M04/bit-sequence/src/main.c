#include <stdio.h>
#include "bit_sequence.h"

int main(void) {
    printf("\n*** Testing op_bit_get_sequence..\n");

    printf("Getting sequence... Should be 0x4D, was 0x%02X\n", op_bit_get_sequence(0x55aa55aa, 0x00133026));

    return 0;
}
