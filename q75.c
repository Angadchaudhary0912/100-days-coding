//Add two matrices.
#include <stdio.h>
#define MAX 10
void addMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }
}
int main() {
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
    int row, column;

    printf("Enter number of rows and columns (max %d): ", MAX);
    scanf("%d %d", &row, &column);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    addMatrices(first, second, result, row, column);

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
