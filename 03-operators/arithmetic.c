/**
 * 03-operators/arithmetic.c
 * 
 * Demonstrates basic arithmetic operations: +, -, *, /, %
 */

#include <stdio.h>

int main(void) {
    int a = 17;
    int b = 5;

    printf("a = %d, b = %d\n", a, b);
    printf("Addition:       a + b = %d\n", a + b);
    printf("Subtraction:    a - b = %d\n", a - b);
    printf("Multiplication: a * b = %d\n", a * b);
    printf("Integer Div:    a / b = %d\n", a / b); // Truncates decimal
    printf("Modulus:        a %% b = %d\n", a % b); // Remainder

    // Floating-point division using type cast
    float floatDivision = (float)a / b;
    printf("Float Div:      (float)a / b = %.2f\n", floatDivision);

    return 0;
}
