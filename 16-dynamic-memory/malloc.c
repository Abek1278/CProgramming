/**
 * 16-dynamic-memory/malloc.c
 * 
 * Demonstrates heap memory allocation using malloc() from <stdlib.h>.
 * Memory allocated with malloc contains uninitialized garbage values.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5;

    // Allocate memory for n integers
    int *arr = (int *)malloc(n * sizeof(int));

    // ALWAYS check if allocation succeeded
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1;
    }

    // Populate and print values
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }

    printf("Dynamically allocated array via malloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Clean up heap memory
    free(arr);
    arr = NULL; // Prevent dangling pointer

    return 0;
}
