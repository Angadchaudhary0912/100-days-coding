//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#define MAX 10
int areDiagonalElementsDistinct(int matrix[MAX][MAX], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][i] == matrix[j][j]) {
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

    if (areDiagonalElementsDistinct(matrix, size)) {
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are not distinct.\n");
    }

    return 0;
}
