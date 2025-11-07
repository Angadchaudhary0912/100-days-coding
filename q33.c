//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>
int isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;

    while (n > 0) {
        digits++;
        n /= 10;
    }

    n = original; 
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }

    return sum == original;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}
