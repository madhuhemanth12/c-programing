) #include <stdio.h>

// Function to swap two numbers using pointers (call by reference)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to increment a number using pointers (call by reference)
void increment(int *num) {
    (*num)++;
}

int main() {
    int num1 = 5, num2 = 10;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function to swap values using pointers
    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    printf("Before incrementing: num1 = %d\n", num1);

    // Call the increment function to increment the value using pointers
    increment(&num1);

    printf("After incrementing: num1 = %d\n", num1);

    return 0;
}
