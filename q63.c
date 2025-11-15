//Merge two arrays.
#include <stdio.h>
#define MAX_SIZE 100
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }

    
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }
}
int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergedArr[2 * MAX_SIZE];
    int size1, size2;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);
    printf("Enter %d elements for the first array:\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);
    printf("Enter %d elements for the second array:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    printf("Merged array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
