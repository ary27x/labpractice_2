#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100], transpose[100][100];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            scanf("%d", &matrix[i][j]);

    // Transpose
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            transpose[j][i] = matrix[i][j];

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
