/**
 * 13-structures/typedef.c
 * 
 * Demonstrates using typedef to create aliases for structures and types,
 * simplifying code by avoiding repetitive 'struct' keywords.
 */

#include <stdio.h>

// Defining Point type alias
typedef struct {
    int x;
    int y;
} Point;

// Defining custom type aliases
typedef unsigned long ulong;

int main(void) {
    Point p1 = {10, 20};
    Point p2 = {30, 40};

    printf("Point 1: (%d, %d)\n", p1.x, p1.y);
    printf("Point 2: (%d, %d)\n", p2.x, p2.y);

    ulong largeNumber = 1000000UL;
    printf("Custom type ulong value: %lu\n", largeNumber);

    return 0;
}
