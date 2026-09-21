/**
 * 13-structures/nested_struct.c
 * 
 * Demonstrates nesting one structure inside another.
 */

#include <stdio.h>

struct Address {
    char city[30];
    int postalCode;
};

struct Employee {
    int id;
    char name[40];
    struct Address location; // Nested structure
};

int main(void) {
    struct Employee emp = {
        .id = 501,
        .name = "Jordan",
        .location = {
            .city = "New York",
            .postalCode = 10001
        }
    };

    printf("Employee ID:   %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("City:          %s\n", emp.location.city);
    printf("Postal Code:   %d\n", emp.location.postalCode);

    return 0;
}
