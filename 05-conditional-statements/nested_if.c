/**
 * 05-conditional-statements/nested_if.c
 * 
 * Demonstrates nested conditions (if inside another if).
 */

#include <stdio.h>

int main(void) {
    int age = 19;
    int isRegisteredVoter = 1;

    if (age >= 18) {
        printf("Age check passed (Adult).\n");

        if (isRegisteredVoter) {
            printf("Status: Eligible to cast ballot.\n");
        } else {
            printf("Status: Please register to vote before election day.\n");
        }
    } else {
        printf("Status: Under 18, not eligible to vote.\n");
    }

    return 0;
}
