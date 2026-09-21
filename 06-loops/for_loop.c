/**
 * 06-loops/for_loop.c
 * 
 * Demonstrates the for loop construct (initialization; condition; increment/decrement).
 */

#include <stdio.h>

int main(void) {
    printf("Counting from 1 to 5:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Sum of first 10 positive integers:\n");
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("Sum = %d\n", sum);

    return 0;
}
