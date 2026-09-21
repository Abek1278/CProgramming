/**
 * 05-conditional-statements/ternary.c
 * 
 * Demonstrates the ternary conditional operator (? :)
 * Syntax: condition ? expression_if_true : expression_if_false
 */

#include <stdio.h>

int main(void) {
    int num = 7;

    // Determine even or odd using ternary
    const char *result = (num % 2 == 0) ? "Even" : "Odd";
    printf("%d is %s\n", num, result);

    // Finding maximum of two numbers
    int a = 25, b = 42;
    int max = (a > b) ? a : b;
    printf("Max of %d and %d is %d\n", a, b, max);

    return 0;
}
