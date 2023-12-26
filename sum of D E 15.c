 #include <stdio.h>

// Function to calculate the sum of diagonal elements in a square matrix
int sumDiagonal(int matrix[10][10], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i]; // Add the diagonal element at position (i, i)
    }
    return sum;
}

int main() {
    int matrix[10][10];
    int size;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Input elements for the square matrix
    printf("Enter the elements of the square matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Call the function to calculate the sum of diagonal elements
    int diagonalSum = sumDiagonal(matrix, size);

    // Display the sum of diagonal elements
    printf("Sum of diagonal elements: %d\n", diagonalSum);

    return 0;
}
