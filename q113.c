//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;

  
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

   
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

 
    printf("Enter k: ");
    scanf("%d", &k);

    qsort(arr, n, sizeof(int), compare);

   
    if(k >= 1 && k <= n)
        printf("The %dth smallest element is: %d\n", k, arr[k-1]);
    else
        printf("Invalid value of k\n");

    return 0;
}
