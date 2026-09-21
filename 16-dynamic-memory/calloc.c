/**
 * 16-dynamic-memory/calloc.c
 * 
 * Demonstrates contiguous memory allocation using calloc().
 * Unlike malloc, calloc initializes all allocated bytes to zero.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count = 6;

    // Allocate and zero-initialize memory for 6 integers
    int *numbers = (int *)calloc(count, sizeof(int));

    if (numbers == NULL) {
        fprintf(stderr, "calloc failed to allocate memory\n");
        return 1;
    }

    printf("Array allocated with calloc (automatically zero-initialized):\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers);
    numbers = NULL;

    return 0;
}
