//Print each character of a string on a new line.
#include <stdio.h>
void printCharacters(const char *str) {
    int index = 0;
    while (str[index] != '\0') {
        printf("%c\n", str[index]);
        index++;
    }
}
int main() {
    char inputString[256];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    
    size_t len = 0;
    while (inputString[len] != '\0') {
        len++;
    }
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }

    printCharacters(inputString);
    return 0;
}
