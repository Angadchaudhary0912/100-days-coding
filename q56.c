//Read and print elements of a one-dimensional array.
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int n, i;

    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE || n <= 0) {
        printf("Invalid size! Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
