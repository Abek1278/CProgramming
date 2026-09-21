/**
 * 15-constants-and-enums/constants.c
 * 
 * Demonstrates defining constants in C using:
 * 1. Preprocessor #define directives
 * 2. The 'const' type qualifier
 */

#include <stdio.h>

// Preprocessor macro: replaced by text substitution before compilation
#define PI 3.141592653589793
#define MAX_BUFFER_SIZE 1024

int main(void) {
    // const qualifier: creates a read-only variable with type safety
    const int daysInWeek = 7;
    const double speedOfLight = 299792458.0; // meters per second

    printf("PI:             %lf\n", PI);
    printf("Max Buffer:     %d\n", MAX_BUFFER_SIZE);
    printf("Days in week:   %d\n", daysInWeek);
    printf("Speed of light: %.0f m/s\n", speedOfLight);

    // Attempting to modify a const variable causes a compile error:
    // daysInWeek = 8; // Error!

    return 0;
}
