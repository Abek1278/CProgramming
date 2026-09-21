/**
 * 02-variables-and-data-types/comments.c
 * 
 * Demonstrates the two types of comments in C:
 * 1. Single-line comments (//)
 * 2. Multi-line / block comments
 */

#include <stdio.h>

int main(void) {
    // This is a single-line comment. The compiler ignores this line.

    /*
     * This is a multi-line comment.
     * It is useful for explaining longer logic,
     * documentation, or temporarily disabling code blocks.
     */

    printf("Comments help explain why code is written, not just what it does.\n");

    return 0;
}
