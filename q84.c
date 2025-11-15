//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
void toUpperCase(char *str) {
    int index = 0;
    while (str[index] != '\0') {
        if (str[index] >= 'a' && str[index] <= 'z') {
            str[index] = str[index] - ('a' - 'A');
        }
        index++;
    }
}
int main() {
    char inputString[256];
    printf("Enter a lowercase string: ");
    fgets(inputString, sizeof(inputString), stdin);

    
    size_t len = 0;
    while (inputString[len] != '\0') {
        len++;
    }
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }

    toUpperCase(inputString);
    printf("Uppercase string: %s\n", inputString);
    return 0;
}
