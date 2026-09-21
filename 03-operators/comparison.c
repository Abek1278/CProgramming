/**
 * 03-operators/comparison.c
 * 
 * Demonstrates comparison (relational) operators: ==, !=, <, >, <=, >=
 * In C, comparisons evaluate to 1 (true) or 0 (false).
 */

#include <stdio.h>

int main(void) {
    int a = 15;
    int b = 20;

    printf("a = %d, b = %d\n", a, b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a < b  : %d\n", a < b);
    printf("a > b  : %d\n", a > b);
    printf("a <= b : %d\n", a <= b);
    printf("a >= b : %d\n", a >= b);

    return 0;
}
