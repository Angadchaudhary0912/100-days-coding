//multiply two matrices.
#include <stdio.h>
#define MAX 10
void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int rowFirst, int columnFirst, int columnSecond) {
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnSecond; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columnFirst; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}
int main() {
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
    int rowFirst, columnFirst, rowSecond, columnSecond;

    printf("Enter rows and columns for first matrix (max %d): ", MAX);
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter rows and columns for second matrix (max %d): ", MAX);
    scanf("%d %d", &rowSecond, &columnSecond);

    if (columnFirst != rowSecond) {
        printf("Error! Column of first matrix must be equal to row of second.\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnFirst; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rowSecond; i++) {
        for (int j = 0; j < columnSecond; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    multiplyMatrices(first, second, result, rowFirst, columnFirst, columnSecond);

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnSecond; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
