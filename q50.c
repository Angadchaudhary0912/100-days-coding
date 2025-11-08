/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */
#include <stdio.h>
int main() {
    int i, j, rows = 5;

    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = i; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
