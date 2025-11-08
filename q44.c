//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
float sum_of_series(int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        int numerator = 2 * i + 1;
        int denominator = 2 * i + 2;
        sum += (float)numerator / denominator;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    float result = sum_of_series(n);
    printf("The sum of the series up to %d terms is: %.2f\n", n, result);
    
    return 0;
}
