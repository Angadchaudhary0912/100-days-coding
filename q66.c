//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
void insertInSortedArray(int arr[], int *size, int element, int capacity) {
    if (*size >= capacity) {
        printf("Array is full. Cannot insert new element.\n");
        return;
    }

    int i;
    for (i = *size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
    (*size)++;
}
int main() {
    int arr[100] = {2, 4, 6, 8, 10};
    int size = 5;
    int capacity = 100;
    int element;

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    insertInSortedArray(arr, &size, element, capacity);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
