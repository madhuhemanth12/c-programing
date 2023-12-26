#include <stdio.h>

// Function to transpose a 2-D array
void transpose(int matrix[10][10], int rows, int cols, int result[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

// Function to display a 2-D array
void displayMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[10][10], transposed[10][10];
    int rows, cols;

    // Input the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input elements for the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Call the function to transpose the matrix
    transpose(matrix, rows, cols, transposed);

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, rows, cols);

    // Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    displayMatrix(transposed, cols, rows);

    return 0;
}




