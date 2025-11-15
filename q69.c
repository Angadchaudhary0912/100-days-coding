//Find the second largest element in an array.
#include <stdio.h>
void findSecondLargest(int arr[], int size, int *secondLargest) {
    int largest = -1;
    *secondLargest = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            *secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > *secondLargest && arr[i] != largest) {
            *secondLargest = arr[i];
        }
    }
}
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int secondLargest;

    findSecondLargest(arr, size, &secondLargest);

    if (secondLargest != -1) {
        printf("The second largest element is: %d\n", secondLargest);
    } else {
        printf("There is no second largest element.\n");
    }

    return 0;
}
