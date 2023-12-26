6)	#include <stdio.h>

// Recursive function to generate Fibonacci series
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to print Fibonacci series up to n terms
void printFibonacciSeries(int n) {
    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Invalid input. Number of terms should be greater than 0.\n");
    } else {
        // Call the function to print the Fibonacci series
        printFibonacciSeries(terms);
    }

    return 0;
}

