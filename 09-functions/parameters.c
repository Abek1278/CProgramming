/**
 * 09-functions/parameters.c
 * 
 * Demonstrates pass-by-value semantics in C function parameters.
 */

#include <stdio.h>

// Modifying parameter 'n' inside modifyValue does not change original variable
void modifyValue(int n) {
    n = n + 10;
    printf("Inside modifyValue(): n = %d\n", n);
}

void printProfile(const char *name, int age) {
    printf("Profile: Name = %s, Age = %d\n", name, age);
}

int main(void) {
    int original = 50;

    printf("Before calling modifyValue(): original = %d\n", original);
    modifyValue(original);
    printf("After calling modifyValue():  original = %d (unchanged)\n", original);

    printProfile("Alice", 21);

    return 0;
}
