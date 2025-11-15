//Insert an element in an array at a given position.
#include <stdio.h>
void insertAtPosition(int arr[], int *size, int element, int position, int capacity
) {
    if (*size >= capacity) {
        printf("Array is full. Cannot insert new element.\n");
        return;
    }
    if (position < 0 || position > *size) {
        printf("Invalid position. Please enter a position between 0 and %d.\n", *size);
        return;
    }

    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}
int main() {
    int arr[100] = {1, 2, 4, 5, 6};
    int size = 5;
    int capacity = 100;
    int element, position;

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert the element (0 to %d): ", size);
    scanf("%d", &position);

    insertAtPosition(arr, &size, element, position, capacity);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
