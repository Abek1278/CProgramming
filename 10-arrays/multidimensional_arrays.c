/**
 * 10-arrays/multidimensional_arrays.c
 * 
 * Demonstrates 2D arrays (matrices) declaration and nested loop traversal.
 */

#include <stdio.h>

#define ROWS 3
#define COLS 3

int main(void) {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("2D Array (Matrix %dx%d):\n", ROWS, COLS);
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            printf("%3d ", matrix[r][c]);
        }
        printf("\n");
    }

    // Access specific element (row 1, col 2 = 6)
    printf("Element at row 1, col 2: %d\n", matrix[1][2]);

    return 0;
}
