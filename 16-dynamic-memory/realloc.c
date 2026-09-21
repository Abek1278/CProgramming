/**
 * 16-dynamic-memory/realloc.c
 * 
 * Demonstrates resizing previously allocated memory using realloc().
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int initialSize = 3;
    int *arr = (int *)malloc(initialSize * sizeof(int));

    if (arr == NULL) {
        fprintf(stderr, "Initial allocation failed\n");
        return 1;
    }

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("Initial array elements: %d %d %d\n", arr[0], arr[1], arr[2]);

    // Expand array to hold 5 elements
    int newSize = 5;
    int *temp = (int *)realloc(arr, newSize * sizeof(int));

    if (temp == NULL) {
        fprintf(stderr, "Reallocation failed\n");
        free(arr); // Clean up original memory
        return 1;
    }

    arr = temp; // Assign safe pointer
    arr[3] = 40;
    arr[4] = 50;

    printf("Resized array elements: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}
