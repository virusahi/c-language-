// C Program to calculate the Transpose of a Matrix
// Hacktoberfest 2025 Contribution

#include <stdio.h>

// Function to display a matrix
void displayMatrix(int matrix[10][10], int row, int col) {
    // Loop through each row
    for (int i = 0; i < row; i++) {
        // Loop through each column
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Move to the next line after each row
    }
}

// Function to compute the transpose of a matrix
void transposeMatrix(int matrix[10][10], int transposed[10][10], int row, int col) {
    // Transpose by interchanging rows and columns
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[10][10], transposed[10][10];
    int row, col;

    // Step 1: Take matrix size as input
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    // Step 2: Take matrix elements as input
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Display the original matrix
    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, row, col);

    // Step 4: Compute the transpose
    transposeMatrix(matrix, transposed, row, col);

    // Step 5: Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    displayMatrix(transposed, col, row);

    return 0;
}
