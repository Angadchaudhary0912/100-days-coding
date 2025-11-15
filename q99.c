//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
#define MAX_DATE_LENGTH 20
void changeDateFormat(const char *inputDate, char *outputDate) {
    const char *monthAbbreviation = "Apr"; 
    int day, year;
    
    sscanf(inputDate, "%d/04/%d", &day, &year);
    
    sprintf(outputDate, "%02d-%s-%d", day, monthAbbreviation, year);
}
int main() {
    const char *inputDate = "15/04/2023";
    char outputDate[MAX_DATE_LENGTH];
    
    changeDateFormat(inputDate, outputDate);
    
    printf("Original Date: \"%s\"\n", inputDate);
    printf("Formatted Date: \"%s\"\n", outputDate);
    
    return 0;
}
