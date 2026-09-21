/**
 * 07-algorithms/linear_search.c
 * 
 * Translating a basic search algorithm from pseudocode to C.
 * 
 * Algorithm:
 * 1. Traverse array element by element.
 * 2. If target found, return its index.
 * 3. If end reached without match, return -1.
 */

#include <stdio.h>

int linearSearch(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Found at index i
        }
    }
    return -1; // Not found
}

int main(void) {
    int numbers[] = {12, 45, 78, 23, 56, 89};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 23;

    int result = linearSearch(numbers, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in array.\n", target);
    }

    return 0;
}
