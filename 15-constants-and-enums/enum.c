/**
 * 15-constants-and-enums/enum.c
 * 
 * Demonstrates enumerated types (enum) for named integer constants.
 */

#include <stdio.h>

// By default, enum values start at 0 and increment by 1
enum Day {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

// Custom starting value
enum HttpStatus {
    HTTP_OK = 200,
    HTTP_BAD_REQUEST = 400,
    HTTP_NOT_FOUND = 404,
    HTTP_SERVER_ERROR = 500
};

int main(void) {
    enum Day today = WEDNESDAY;
    printf("Wednesday numeric value: %d\n", today);

    enum HttpStatus responseCode = HTTP_NOT_FOUND;
    if (responseCode == HTTP_NOT_FOUND) {
        printf("Error: Status %d - Resource Not Found\n", responseCode);
    }

    return 0;
}
