#include <stdio.h>

// Recursive function to generate the nth Fibonacci number
unsigned long long fibonacci(int n) {
    if (n <= 2) {
        return 1;
    } 
	else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    printf("Author: Prashim Timsina\n");
    printf("Program: Printing Fibonacci Series (Recursive)\n");

    int n = 1;

    while (1) {
        unsigned long long fib = fibonacci(n);
        if (fib > 100) {
            break;
        }
        printf("%llu ", fib);
        n++;
    }

    printf("\n");

    return 0;
}

