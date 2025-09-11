//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main(){

    int a = 4;
    float b = 5;

    int sum = a + b;
    int difference = a - b;
    float quotient = a / b;
    int product = a * b;

    printf("%d + %.0f = %d\n", a, b, sum);
    printf("%d - %.0f = %d\n", a, b, difference);
    printf("%d / %.0f = %.0f\n", a, b, quotient);
    printf("%d * %.0f = %d\n", a, b, product);

    

    return 0;
}