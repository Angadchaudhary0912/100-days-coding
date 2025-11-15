//Delete an element from an array.
#include <stdio.h>
void deleteElement(int arr[], int *size, int element) {
    int index = -1;
    for (int i = 0; i < *size; i++) {
        if (arr[i] == element) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("Element %d not found in the array.\n", element);
        return;
    }

    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    printf("Element %d deleted from the array.\n", element);
}
int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;
    int element;

    printf("Enter the element to delete: ");
    scanf("%d", &element);

    deleteElement(arr, &size, element);

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
