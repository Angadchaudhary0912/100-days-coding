//Count characters in a string without using built-in length functions.
#include <stdio.h>
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int main() {
    char inputString[256];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    

    size_t len = stringLength(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }

    int length = stringLength(inputString);
    printf("The length of the string is: %d\n", length);
    return 0;
}
