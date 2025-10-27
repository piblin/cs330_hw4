#ifndef ASGN2_H
#define ASGN2_H

#include <limits.h>

// checks if bit at the given position is 1(set)
int isBitSet(int number, int position) {
    if (position < 0 || position >= (int)(sizeof(int) * CHAR_BIT))
        return -1; // returns if position is invalid
    return (number & (1 << position)) ? 1 : 0; // returns 1 if bit is set or 0 if not
}

// sets the bit in int number to 1 at the given position
int setBit(int number, int position) {
    if (position < 0 || position >= (int)(sizeof(int) * CHAR_BIT))
        return number; // returns number if the position is invalid
    return number | (1 << position); 
}

// sets the bit in int number to 0 at the given position
int clearBit(int number, int position) {
    if (position < 0 || position >= (int)(sizeof(int) * CHAR_BIT))
        return number; // returns number if the position is invalid
    return number & ~(1 << position);
}

// flips the bit in int number at the given position
int toggleBit(int number, int position) {
    if (position < 0 || position >= (int)(sizeof(int) * CHAR_BIT))
        return number; // returns number if the position is invalid
    return number ^ (1 << position);
}

// multiplies the number by 2
int multiplyBy2(int number) {
    return number << 1;
}

// divides the number by 2
int divideBy2(int number) {
    return number >> 1;
}

// counts the number of bits set to 1 in number
int countSetBits(int number) {
    int count = 0;
    unsigned int n = (unsigned int)number;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

#endif
