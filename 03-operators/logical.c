/**
 * 03-operators/logical.c
 * 
 * Demonstrates logical operators: && (AND), || (OR), ! (NOT)
 * Also illustrates short-circuit evaluation.
 */

#include <stdio.h>

int main(void) {
    int age = 22;
    int hasLicense = 1; // 1 = true, 0 = false

    // Logical AND: both conditions must be true
    if (age >= 18 && hasLicense) {
        printf("Eligible to drive.\n");
    } else {
        printf("Not eligible to drive.\n");
    }

    // Logical OR: at least one condition must be true
    int isWeekend = 0;
    int isHoliday = 1;
    if (isWeekend || isHoliday) {
        printf("Time to relax or practice coding!\n");
    }

    // Logical NOT: inverts truth value
    int isRaining = 0;
    if (!isRaining) {
        printf("Clear skies outside.\n");
    }

    return 0;
}
