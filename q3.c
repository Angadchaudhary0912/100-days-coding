//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main(){

    int length = 5;
    int breadth = 10;
    int perimeter = 2 * (length + breadth);
    int area = length * breadth;


    printf("%d * %d = %d\n", length, breadth, area);
    printf("2 * (%d + %d) = %d\n", length, breadth, perimeter);



    return 0;
}