/**
 * 17-file-handling/file_write.c
 * 
 * Demonstrates creating and writing text to a file using fopen("w"),
 * fprintf, fputs, and closing the stream with fclose.
 */

#include <stdio.h>

int main(void) {
    const char *filename = "example.txt";

    // Open file in write mode ("w"). Creates file or truncates if it exists.
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    // Write formatted output
    fprintf(file, "C Programming Learning Laboratory\n");
    fprintf(file, "Module: 17-file-handling\n");
    fputs("File writing operation completed successfully.\n", file);

    // Close the file stream
    fclose(file);
    printf("Successfully wrote data to \"%s\".\n", filename);

    return 0;
}
