/**
 * 05-conditional-statements/switch.c
 * 
 * Demonstrates the switch-case construct, break statements, and default case.
 */

#include <stdio.h>

int main(void) {
    int dayNumber = 3;

    switch (dayNumber) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
        case 7:
            printf("Weekend (Saturday/Sunday)\n");
            break;
        default:
            printf("Invalid day number (expected 1-7)\n");
            break;
    }

    return 0;
}
