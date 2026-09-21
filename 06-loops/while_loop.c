/**
 * 06-loops/while_loop.c
 * 
 * Demonstrates the while loop (pre-tested loop).
 */

#include <stdio.h>

int main(void) {
    int count = 5;

    printf("Countdown starting:\n");
    while (count > 0) {
        printf("%d...\n", count);
        count--;
    }
    printf("Blastoff!\n");

    return 0;
}
