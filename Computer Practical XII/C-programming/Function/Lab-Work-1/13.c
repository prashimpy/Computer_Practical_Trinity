#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } 
	else {
        return n * fact(n - 1);
    }
}

int main() {
    printf("Author: Prashim Timsina\n");
    printf("Program: Factorial Calculation\n\n");

    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long f = fact(n);
        printf("Factorial of %d is %llu\n", n, f);
    }

    return 0;
}

