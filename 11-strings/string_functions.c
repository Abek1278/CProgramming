/**
 * 11-strings/string_functions.c
 * 
 * Demonstrates standard string library functions from <string.h>:
 * strlen, strcpy, strcat, strcmp
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char source[] = "Programming";
    char destination[30];
    char prefix[30] = "C ";

    // 1. strlen: Calculate string length (excluding '\0')
    printf("Length of \"%s\": %zu\n", source, strlen(source));

    // 2. strcpy: Copy source into destination
    strcpy(destination, source);
    printf("Destination after strcpy: %s\n", destination);

    // 3. strcat: Concatenate strings
    strcat(prefix, source);
    printf("Prefix after strcat: %s\n", prefix);

    // 4. strcmp: Compare two strings lexicographically
    int cmp = strcmp("apple", "banana");
    if (cmp < 0) {
        printf("\"apple\" comes before \"banana\"\n");
    } else if (cmp > 0) {
        printf("\"apple\" comes after \"banana\"\n");
    } else {
        printf("Strings are equal\n");
    }

    return 0;
}
