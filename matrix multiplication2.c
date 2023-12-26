#include <stdio.h>

#define MAX_ROW 10
#define MAX_COL 10

void multiplyMatrices(int firstMatrix[MAX_ROW][MAX_COL], int secondMatrix[MAX_ROW][MAX_COL], int result[MAX_ROW][MAX_COL], int rowFirst, int colFirst, int rowSecond, int colSecond) {
    // Initializing elements of matrix mult to 0
    for(int i = 0; i < rowFirst; ++i) {
        for(int j = 0; j < colSecond; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing the result in result
    for(int i = 0; i < rowFirst; ++i) {
        for(int j = 0; j < colSecond; ++j) {
            for(int k = 0; k < colFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[MAX_ROW][MAX_COL], int row, int col) {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rowFirst, colFirst, rowSecond, colSecond;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);

    // Checking if matrices can be multiplied
    if (colFirst != rowSecond) {
        printf("Matrices cannot be multiplied. Exiting...\n");
        return 1;
    }

    int firstMatrix[MAX_ROW][MAX_COL], secondMatrix[MAX_ROW][MAX_COL], result[MAX_ROW][MAX_COL];

    // Taking input for the first matrix
    printf("Enter elements of matrix 1:\n");
    for(int i = 0; i < rowFirst; ++i) {
        for(int j = 0; j < colFirst; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Taking input for the second matrix
    printf("Enter elements of matrix 2:\n");
    for(int i = 0; i < rowSecond; ++i) {
        for(int j = 0; j < colSecond; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Performing matrix multiplication
    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, colFirst, rowSecond, colSecond);

    // Displaying the multiplication result
    printf("\nResultant matrix:\n");
    displayMatrix(result, rowFirst, colSecond);

    return 0;
}
