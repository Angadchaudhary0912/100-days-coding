//Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>
int main(){

    float celsius = 35.0;
    float fahrenheit = (celsius * 9/5) + 32;

    printf("%.2f celcius = %.2f fahrenheit", celsius, fahrenheit);

    return 0;
}