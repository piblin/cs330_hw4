// Name: John Irby, BlazerID: irbyj

#include <stdio.h>
#include "asgn2.h"

int main() {
    printf("\n\n");

    printf("isBitSet(23, 4) = %d\n", isBitSet(23, 4)); // expected 1
    printf("isBitSet(23, 3) = %d\n", isBitSet(23, 3)); // expected 0

    printf("setBit(5, 3) = %d\n", setBit(5, 3)); // expected 13

    printf("clearBit(15, 1) = %d\n", clearBit(15, 1)); // expected 13

    printf("toggleBit(8, 3) = %d\n", toggleBit(8, 3)); // expected 0
    printf("toggleBit(8, 0) = %d\n", toggleBit(8, 0)); // expected 9

    printf("multiplyBy2(7) = %d\n", multiplyBy2(7));   // expected 14
    printf("divideBy2(18) = %d\n", divideBy2(18));     // expected 9

    printf("countSetBits(23) = %d\n", countSetBits(23)); // expected 4

    printf("\nError Handling Tests:\n");
    printf("isBitSet(10, -1) = %d\n", isBitSet(10, -1));
    printf("setBit(10, 999) = %d\n", setBit(10, 999));
    printf("clearBit(10, -3) = %d\n", clearBit(10, -3));

    return 0;
}