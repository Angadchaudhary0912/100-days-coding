//Check if a matrix is symmetric.
#include <stdio.h>
#define MAX 10
int isSymmetric(int matrix[MAX][MAX], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; 
            }
        }
    }
    return 1; 
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

    if (isSymmetric(matrix, size)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
