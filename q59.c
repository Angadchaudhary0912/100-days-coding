//Count even and odd numbers in an array.
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int n, i;
    int even_count = 0, odd_count = 0;

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
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Number of even elements in the array: %d\n", even_count);
    printf("Number of odd elements in the array: %d\n", odd_count);

    return 0;
}
