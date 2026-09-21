/**
 * 11-strings/strings.c
 * 
 * Demonstrates string declaration, null termination ('\0'), and printing.
 */

#include <stdio.h>

int main(void) {
    // String as a character array with explicit null terminator
    char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // String literal initialization (compiler automatically appends '\0')
    char language[] = "C Programming";

    printf("Greeting: %s\n", greeting);
    printf("Language: %s\n", language);

    // Iterating character by character until '\0'
    printf("Characters in language: ");
    for (int i = 0; language[i] != '\0'; i++) {
        printf("'%c' ", language[i]);
    }
    printf("\n");

    return 0;
}
