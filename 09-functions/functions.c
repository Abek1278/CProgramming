/**
 * 09-functions/functions.c
 * 
 * Demonstrates function declaration (prototype), definition, and call.
 */

#include <stdio.h>

// 1. Function Declaration (Prototype)
void greetUser(void);

int main(void) {
    printf("Before calling function.\n");

    // 2. Function Call
    greetUser();

    printf("After returning from function.\n");

    return 0;
}

// 3. Function Definition
void greetUser(void) {
    printf("  -> Hello from inside greetUser()!\n");
}
