/**
 * 02-variables-and-data-types/data_types.c
 * 
 * Demonstrates basic data types and inspecting their sizes using sizeof.
 */

#include <stdio.h>

int main(void) {
    char letter = 'C';
    int integerNumber = 42;
    float singlePrecision = 3.14159f;
    double doublePrecision = 3.1415926535;

    printf("Character: %c (size: %zu bytes)\n", letter, sizeof(letter));
    printf("Integer:   %d (size: %zu bytes)\n", integerNumber, sizeof(integerNumber));
    printf("Float:     %f (size: %zu bytes)\n", singlePrecision, sizeof(singlePrecision));
    printf("Double:    %lf (size: %zu bytes)\n", doublePrecision, sizeof(doublePrecision));

    return 0;
}
