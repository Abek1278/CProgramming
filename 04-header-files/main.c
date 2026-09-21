/**
 * 04-header-files/main.c
 * 
 * Demonstrates including user headers with "..." vs standard headers with <...>.
 * 
 * Compilation:
 * gcc main.c math_utils.c -o program
 */

#include <stdio.h>       // Standard library header
#include "math_utils.h"  // Custom project header

int main(void) {
    int x = 7;
    int y = 3;

    printf("Using custom header math_utils.h:\n");
    printf("%d + %d = %d\n", x, y, add(x, y));
    printf("%d * %d = %d\n", x, y, multiply(x, y));
    printf("Square of %d = %d\n", x, square(x));

    return 0;
}
