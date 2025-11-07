//Write a program to print all factors of a given number.
#include <stdio.h>
void printFactors(int n) {
    printf("Factors of %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printFactors(number);
    return 0;
}
