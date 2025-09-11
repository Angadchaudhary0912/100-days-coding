//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main(){




    int radius = 5;
    float pi = 3.14;
    float area = pi * radius * radius;
    float circumference = 2 * pi * radius;

    printf("Area of circle with radius %d is %.2f\n", radius, area);
    printf("Circumference of circle with radius %d is %.2f\n", radius, circumference);

    return 0;
}