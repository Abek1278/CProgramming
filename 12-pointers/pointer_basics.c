/**
 * 12-pointers/pointer_basics.c
 * 
 * Demonstrates pointer declaration, the address-of operator (&),
 * and the dereference operator (*).
 */

#include <stdio.h>

int main(void) {
    int target = 42;
    int *ptr = &target; // ptr points to memory address of target

    printf("Value of target:           %d\n", target);
    printf("Address of target (&target): %p\n", (void*)&target);
    printf("Value stored in ptr:       %p\n", (void*)ptr);
    printf("Value pointed to by (*ptr):%d\n", *ptr);

    // Modifying target value through pointer dereferencing
    *ptr = 99;
    printf("\nAfter *ptr = 99:\n");
    printf("Value of target:           %d\n", target);

    return 0;
}
