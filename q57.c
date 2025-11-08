//Find the sum of array elements.
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int n, i;
    int sum = 0;

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

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
