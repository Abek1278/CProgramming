/**
 * 09-functions/recursion.c
 * 
 * Demonstrates recursive functions: base case and recursive step.
 */

#include <stdio.h>

// Factorial: n! = n * (n - 1)! with base case 0! = 1
long long factorial(int n) {
    if (n <= 1) {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive step
}

// Fibonacci: fib(n) = fib(n-1) + fib(n-2)
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int num = 5;
    printf("Factorial of %d = %lld\n", num, factorial(num));

    printf("First 7 Fibonacci terms: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
