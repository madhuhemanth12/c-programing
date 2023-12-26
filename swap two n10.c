#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the original values
    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    // Call the function to swap values using pointers
    swap(&num1, &num2);

    // Display the swapped values
    printf("Swapped values: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

