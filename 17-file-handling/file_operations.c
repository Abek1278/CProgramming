/**
 * 17-file-handling/file_operations.c
 * 
 * Demonstrates appending to a file ("a"), flushing buffers,
 * and checking file status.
 */

#include <stdio.h>

int main(void) {
    const char *logFile = "activity.log";

    // Append mode ("a") creates file if not found, or adds to end without overwriting
    FILE *file = fopen(logFile, "a");

    if (file == NULL) {
        perror("Error opening log file");
        return 1;
    }

    fprintf(file, "Log entry: Application checkpoint reached.\n");
    fflush(file); // Ensure buffer is flushed immediately to disk
    fclose(file);

    printf("Appended log entry to \"%s\".\n", logFile);

    return 0;
}
