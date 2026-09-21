/**
 * 03-operators/assignment.c
 * 
 * Demonstrates simple and compound assignment operators: =, +=, -=, *=, /=, %=
 */

#include <stdio.h>

int main(void) {
    int x = 10;
    printf("Initial x = %d\n", x);

    x += 5; // Equivalent to: x = x + 5
    printf("After x += 5:  %d\n", x);

    x -= 3; // Equivalent to: x = x - 3
    printf("After x -= 3:  %d\n", x);

    x *= 2; // Equivalent to: x = x * 2
    printf("After x *= 2:  %d\n", x);

    x /= 4; // Equivalent to: x = x / 4
    printf("After x /= 4:  %d\n", x);

    x %= 4; // Equivalent to: x = x % 4
    printf("After x %%= 4:  %d\n", x);

    return 0;
}
