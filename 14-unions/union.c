/**
 * 14-unions/union.c
 * 
 * Demonstrates unions in C:
 * Unlike structs (where each member has its own storage),
 * all members of a union share the EXACT SAME memory location.
 * The size of a union is determined by its largest member.
 */

#include <stdio.h>

union DataValue {
    int i;
    float f;
    char ch;
};

int main(void) {
    union DataValue val;

    printf("Memory size of union DataValue: %zu bytes\n\n", sizeof(val));

    // Store integer
    val.i = 100;
    printf("val.i = %d\n", val.i);

    // Store float (overwrites the same memory location)
    val.f = 3.14f;
    printf("val.f = %.2f\n", val.f);
    printf("val.i after writing float (corrupted): %d\n\n", val.i);

    // Store character (overwrites first byte)
    val.ch = 'Z';
    printf("val.ch = %c\n", val.ch);

    return 0;
}
