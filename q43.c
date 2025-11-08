//Write a program to check if a number is a strong number.


#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int is_strong_number(int num) {
    int original_num = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return sum == original_num;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (is_strong_number(number)) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }

    return 0;
}
