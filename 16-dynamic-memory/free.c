/**
 * 16-dynamic-memory/free.c
 * 
 * Demonstrates deallocating dynamically allocated memory with free()
 * and avoiding dangling pointers by setting pointers to NULL.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *data = (int *)malloc(sizeof(int) * 3);

    if (data == NULL) {
        fprintf(stderr, "Allocation error\n");
        return 1;
    }

    data[0] = 111;
    data[1] = 222;
    data[2] = 333;

    printf("Using dynamic memory: %d, %d, %d\n", data[0], data[1], data[2]);

    // 1. Deallocate memory back to operating system
    free(data);

    // 2. Set pointer to NULL to prevent accidental dereference (dangling pointer)
    data = NULL;

    printf("Memory successfully freed and pointer set to NULL.\n");

    return 0;
}
