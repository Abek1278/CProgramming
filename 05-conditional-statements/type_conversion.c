/**
 * 05-conditional-statements/type_conversion.c
 * 
 * Demonstrates implicit (coercion) and explicit (type casting) conversions.
 */

#include <stdio.h>

int main(void) {
    // Implicit type conversion (automatic promotion)
    int intVal = 10;
    char charVal = 'A'; // ASCII 65
    int sum = intVal + charVal; // char promoted to int
    printf("Implicit conversion ('A' + 10): %d\n", sum);

    // Explicit type conversion (type casting)
    int totalScore = 175;
    int subjects = 2;

    // Without casting: integer division truncates
    double wrongAverage = totalScore / subjects; 
    // With casting: promoted to double division
    double correctAverage = (double)totalScore / subjects;

    printf("Without cast: %f\n", wrongAverage);
    printf("With cast:    %f\n", correctAverage);

    return 0;
}
