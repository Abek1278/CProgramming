/**
 * 08-debugging/debugging_basics.c
 * 
 * Demonstrates basic debugging output using __FILE__ and __LINE__ macros
 * and assertion checks via <assert.h>.
 */

#include <stdio.h>
#include <assert.h>

int divide(int numerator, int denominator) {
    // Assert statement will terminate program with diagnostic if condition fails
    assert(denominator != 0 && "Denominator must not be zero!");
    return numerator / denominator;
}

int main(void) {
    printf("[DEBUG] %s:%d - Starting division tests\n", __FILE__, __LINE__);

    int result1 = divide(10, 2);
    printf("10 / 2 = %d\n", result1);

    int result2 = divide(25, 5);
    printf("25 / 5 = %d\n", result2);

    printf("[DEBUG] %s:%d - Tests completed successfully\n", __FILE__, __LINE__);

    return 0;
}
