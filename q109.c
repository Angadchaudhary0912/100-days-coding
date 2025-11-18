//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    
    if (k > n) {
        printf("-1");
        return 0;
    }

    int currentSum = 0;

    
    for (int i = 0; i < k; i++)
        currentSum += arr[i];

    int maxSum = currentSum;

   
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k]; 
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d", maxSum);

    return 0;
}
