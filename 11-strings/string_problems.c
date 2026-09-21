/**
 * 11-strings/string_problems.c
 * 
 * Practice Problem: Reverse a string in-place and check if it is a palindrome.
 */

#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(const char *str) {
    int left = 0;
    int right = (int)strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is palindrome
}

// Function to reverse a string in-place
void reverseString(char *str) {
    int left = 0;
    int right = (int)strlen(str) - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main(void) {
    char word1[] = "radar";
    char word2[] = "hello";

    printf("Is \"%s\" a palindrome? %s\n", word1, isPalindrome(word1) ? "Yes" : "No");
    printf("Is \"%s\" a palindrome? %s\n", word2, isPalindrome(word2) ? "Yes" : "No");

    printf("Original word2: %s\n", word2);
    reverseString(word2);
    printf("Reversed word2: %s\n", word2);

    return 0;
}
