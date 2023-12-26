#include <stdio.h>
#include <math.h>

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }
}

// Function to perform exponentiation
double exponent(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    int choice;
    double num1, num2;

    do {
        // Display menu
        printf("\nMath Operations Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exponentiation\n");
        printf("0. Exit\n");

        // Get user choice
        printf("Enter your choice (0-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Addition
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", add(num1, num2));
                break;

            case 2:
                // Subtraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", subtract(num1, num2));
                break;

            case 3:
                // Multiplication
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", multiply(num1, num2));
                break;

            case 4:
                // Division
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", divide(num1, num2));
                break;

            case 5:
                // Exponentiation
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", exponent(num1, num2));
                break;

            case 0:
                // Exit
                printf("Exiting the program.\n");
                break;

            default:
                // Invalid choice
                printf("Invalid choice. Please enter a number between 0 and 5.\n");
        }

    } while (choice != 0);

    return 0;
}

