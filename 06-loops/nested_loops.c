/**
 * 06-loops/nested_loops.c
 * 
 * Demonstrates nested loops to create a pattern / multiplication table grid.
 */

#include <stdio.h>

int main(void) {
    int rows = 4;
    int cols = 4;

    printf("Multiplication Grid (%dx%d):\n", rows, cols);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    printf("\nTriangle Star Pattern:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
