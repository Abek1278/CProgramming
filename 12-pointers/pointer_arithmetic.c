/**
 * 12-pointers/pointer_arithmetic.c
 * 
 * Demonstrates pointer increments, decrements, and step sizes.
 * Advancing a pointer by 1 moves it by sizeof(type) bytes.
 */

#include <stdio.h>

int main(void) {
    int numbers[4] = {10, 20, 30, 40};
    int *ptr = numbers; // Points to first element: numbers[0]

    printf("sizeof(int) = %zu bytes\n\n", sizeof(int));

    for (int i = 0; i < 4; i++) {
        printf("ptr address: %p, value: %d\n", (void*)ptr, *ptr);
        ptr++; // Moves by sizeof(int) bytes
    }

    return 0;
}
