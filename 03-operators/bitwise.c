/**
 * 03-operators/bitwise.c
 * 
 * Demonstrates bitwise operators: & (AND), | (OR), ^ (XOR), ~ (NOT), << (left shift), >> (right shift)
 */

#include <stdio.h>

int main(void) {
    unsigned char a = 5;  // Binary: 0000 0101
    unsigned char b = 9;  // Binary: 0000 1001

    printf("a = %u, b = %u\n", a, b);
    printf("a & b  = %u\n", a & b);   // 0000 0001 (1)
    printf("a | b  = %u\n", a | b);   // 0000 1101 (13)
    printf("a ^ b  = %u\n", a ^ b);   // 0000 1100 (12)
    printf("~a     = %d\n", (char)~a);// Bitwise complement
    printf("a << 1 = %u\n", a << 1);  // 0000 1010 (10) - Multiply by 2
    printf("b >> 1 = %u\n", b >> 1);  // 0000 0100 (4)  - Divide by 2

    return 0;
}
