) #include <stdio.h>

// Function to point to the upper triangle of a matrix
void upperTriangle(int matrix[10][10], int rows, int cols, int *upperTriangleArray) {
    int index = 0;

    // Iterate through the rows
    for (int i = 0; i < rows; i++) {
        // Iterate through the columns
        for (int j = 0; j < cols; j++) {
            // Check if the element is above or on the diagonal
            if (j >= i) {
                // Point to the upper triangle element
                upperTriangleArray[index] = matrix[i][j];
                index++;
            }
        }
    }
}

int main() {
    int matrix[10][10];
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

    // Calculate the size of the upper triangle array
    int upperTriangleSize = (rows * (rows + 1)) / 2;

    // Declare an array to store the upper triangle elements
    int upperTriangleArray[upperTriangleSize];

    // Call the function to point to the upper triangle
    upperTriangle(matrix, rows, cols, upperTriangleArray);

    // Display the upper triangle elements
    printf("\nUpper Triangle Elements:\n");
    for (int i = 0; i < upperTriangleSize; i++) {
        printf("%d ", upperTriangleArray[i]);
    }
    printf("\n");

    return 0;
}


