 #include <stdio.h>

// Function prototypes for arithmetic operations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

// Function pointer type for arithmetic operations
typedef int (*ArithmeticFunction)(int, int);

int main() {
    int num1, num2;
    ArithmeticFunction operation;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display menu for arithmetic operations
    printf("\nArithmetic Operations Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // Input user choice
    int choice;
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Set the function pointer based on the user's choice
    switch (choice) {
        case 1:
            operation = add;
            break;
        case 2:
            operation = subtract;
            break;
        case 3:
            operation = multiply;
            break;
        case 4:
            operation = divide;
            break;
        default:
            printf("Invalid choice. Exiting the program.\n");
            return 1;
    }

    // Perform the selected arithmetic operation using the function pointer
    int result = operation(num1, num2);

    // Display the result
    printf("Result: %d\n", result);

    return 0;
}

// Function definitions for arithmetic operations
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }
}

