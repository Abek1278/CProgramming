/**
 * 10-arrays/arrays.c
 * 
 * Demonstrates 1D array declaration, initialization, indexing, and traversal.
 */

#include <stdio.h>

int main(void) {
    // Declaration and initialization
    int scores[5] = {85, 92, 78, 90, 88};
    int size = sizeof(scores) / sizeof(scores[0]);

    printf("Array elements (size = %d):\n", size);
    for (int i = 0; i < size; i++) {
        printf("scores[%d] = %d\n", i, scores[i]);
    }

    // Modifying an element
    scores[2] = 95;
    printf("Updated scores[2] = %d\n", scores[2]);

    // Calculate sum and average
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    double average = (double)sum / size;
    printf("Sum = %d, Average = %.2f\n", sum, average);

    return 0;
}
