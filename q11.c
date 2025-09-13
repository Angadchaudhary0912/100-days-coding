//Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main(){

    int month = 4; 
    int days;
    char *month_name;

    switch(month){
        case 1:
            month_name = "January";
            days = 31;
            break;
        case 2:
            month_name = "February";
            days = 28; 
            break;
        case 3:
            month_name = "March";
            days = 31;
            break;
        case 4:
            month_name = "April";
            days = 30;
            break;
        case 5:
            month_name = "May";
            days = 31;
            break;
        case 6:
            month_name = "June";
            days = 30;
            break;
        case 7:
            month_name = "July";
            days = 31;
            break;
        case 8:
            month_name = "August";
            days = 31;
            break;
        case 9:
            month_name = "September";
            days = 30;
            break;
        case 10:
            month_name = "October";
            days = 31;
            break;
        case 11:
            month_name = "November";
            days = 30;
            break;
        case 12:
            month_name = "December";
            days = 31;
            break;
        
    }

    if(days != 0){
        printf("%s has %d days.\n", month_name, days);
    } else {
        printf("%s\n", month_name);
    }

    return 0;
}