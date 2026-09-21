/**
 * 02-variables-and-data-types/variables.c
 * 
 * Demonstrates variable declaration, initialization, and assignment.
 */

#include <stdio.h>

int main(void) {
    // Declaration without immediate initialization (contains indeterminate value)
    int age;

    // Initialization / assignment
    age = 20;

    // Direct declaration and initialization
    int year = 2026;
    double temperature = 24.5;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Year: %d\n", year);
    printf("Temperature: %.1f C\n", temperature);
    printf("Grade: %c\n", grade);

    // Reassignment
    age = age + 1;
    printf("Age next year: %d\n", age);

    return 0;
}
