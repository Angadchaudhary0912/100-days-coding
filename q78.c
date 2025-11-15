//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
#define MAX 10
int sumMainDiagonal(int matrix[MAX][MAX], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum;
}
int main() {
    int matrix[MAX][MAX];
    int size;

    printf("Enter the size of the square matrix (max %d): ", MAX);
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = sumMainDiagonal(matrix, size);
    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}
