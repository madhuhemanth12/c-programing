include <stdio.h>

// Function to calculate factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// Function to calculate nCr
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Checking if n is greater than or equal to r
    if (n < r) {
        printf("Invalid input. n should be greater than or equal to r.\n");
    } else {
        int result = nCr(n, r);
        printf("%dC%d is: %d\n", n, r, result);
    }

    return 0;
}

