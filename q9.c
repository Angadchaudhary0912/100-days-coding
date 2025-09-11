//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
int main(){

    float principal = 1000.0;
    float rate = 5.0;
    float time = 3.0;

    float simple_interest = (principal * rate * time) / 100;
    float compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;




}