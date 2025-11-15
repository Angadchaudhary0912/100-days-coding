//Perform diagonal traversal of a matrix.
#include <stdio.h>
#define MAX 10
void diagonalTraversal(int matrix[MAX][MAX], int row, int column) {
    for (int d = 0; d < row + column - 1; d++) {
        int startRow = (d < column) ? 0 : d - column + 1;
        int count = (d < column) ? d + 1 : (row + column - 1 - d < row) ? row : row + column - 1 - d;

        for (int j = 0; j < count; j++) {
            int i = startRow + j;
            int jIndex = d - i;
            if (i < row && jIndex >= 0 && jIndex < column) {
                printf("%d ", matrix[i][jIndex]);
            }
        }
        printf("\n");
    }
}
int main() {
    int matrix[MAX][MAX];
    int row, column;

    printf("Enter number of rows and columns (max %d): ", MAX);
    scanf("%d %d", &row, &column);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");
    diagonalTraversal(matrix, row, column);

    return 0;
}
