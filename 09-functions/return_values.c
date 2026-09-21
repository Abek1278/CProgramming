/**
 * 09-functions/return_values.c
 * 
 * Demonstrates return types, early returns, and returning values from functions.
 */

#include <stdio.h>

int findMax(int a, int b) {
    if (a > b) {
        return a; // Early return
    }
    return b;
}

int squareNumber(int num) {
    return num * num;
}

int main(void) {
    int maxVal = findMax(25, 40);
    printf("Max value: %d\n", maxVal);

    int sq = squareNumber(9);
    printf("9 squared: %d\n", sq);

    return 0;
}
