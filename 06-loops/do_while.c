/**
 * 06-loops/do_while.c
 * 
 * Demonstrates the do-while loop (post-tested loop).
 * Guaranteed to execute at least once.
 */

#include <stdio.h>

int main(void) {
    int attempts = 0;

    do {
        printf("Executing do-while body (iteration %d)\n", attempts + 1);
        attempts++;
    } while (attempts < 3);

    // Demonstration of running at least once even if condition is false
    int value = 100;
    do {
        printf("This executes once even though condition (%d < 10) is false.\n", value);
    } while (value < 10);

    return 0;
}
