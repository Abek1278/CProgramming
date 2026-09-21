/**
 * 17-file-handling/file_read.c
 * 
 * Demonstrates reading text from a file using fopen("r"), fgets, and feof.
 */

#include <stdio.h>

#define BUFFER_SIZE 256

int main(void) {
    const char *filename = "example.txt";

    // Open file in read mode ("r")
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        perror("Error opening file for reading (make sure example.txt exists or run file_write first)");
        return 1;
    }

    char buffer[BUFFER_SIZE];
    int lineNumber = 1;

    printf("Reading contents of \"%s\":\n\n", filename);
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("[%02d] %s", lineNumber++, buffer);
    }

    fclose(file);
    return 0;
}
