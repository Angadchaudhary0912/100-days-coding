//Find the maximum and minimum element in an array.

#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int n, i;
    int max, min;

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

    max = arr[0];
    min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}
