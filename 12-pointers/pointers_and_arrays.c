/**
 * 12-pointers/pointers_and_arrays.c
 * 
 * Demonstrates the relationship between arrays and pointers.
 * In C, arr[i] is equivalent to *(arr + i).
 */

#include <stdio.h>

int main(void) {
    int arr[5] = {100, 200, 300, 400, 500};
    int *p = arr; // Array name decays to pointer to first element

    printf("Array indexing vs Pointer offset notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d  |  *(p + %d) = %d  |  *(arr + %d) = %d\n",
               i, arr[i], i, *(p + i), i, *(arr + i));
    }

    return 0;
}
