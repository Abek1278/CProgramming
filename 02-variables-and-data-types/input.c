/**
 * 02-variables-and-data-types/input.c
 * 
 * Demonstrates reading user input from the console using scanf.
 */

#include <stdio.h>

int main(void) {
    int age;
    float rating;

    printf("Enter your age: ");
    // Remember: & is needed before non-pointer variables to pass the address
    if (scanf("%d", &age) != 1) {
        printf("Failed to read a valid number.\n");
        return 1;
    }

    printf("Enter a rating out of 10.0: ");
    if (scanf("%f", &rating) != 1) {
        printf("Failed to read a valid float.\n");
        return 1;
    }

    printf("Recorded: Age = %d, Rating = %.1f\n", age, rating);

    return 0;
}
