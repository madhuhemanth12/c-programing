#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void addMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int mat[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Error: Maximum size exceeded for rows or columns.\n");
        return 1;
    }

    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];

    printf("Enter the elements of matrix1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of matrix2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding matrices
    addMatrices(matrix1, matrix2, result, rows, cols);

    // Displaying matrices
    printf("Matrix1:\n");
    displayMatrix(matrix1, rows, cols);

    printf("Matrix2:\n");
    displayMatrix(matrix2, rows, cols);

    printf("Sum of the matrices:\n");
    displayMatrix(result, rows, cols);

    return 0;
}
