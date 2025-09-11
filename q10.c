//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main(){

    int total_seconds = 5100; 
    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;
    printf("%d seconds is %02d:%02d:%02d (hh:mm:ss)\n", total_seconds, hours, minutes, seconds);


return 0;

}