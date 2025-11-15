//Reverse a string.
#include <stdio.h>
void reverseString(char *str) {
    int start = 0;
    int end = 0;
    while (str[end] != '\0') {
        end++;
    }
    end--; 

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
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

    reverseString(inputString);
    printf("Reversed string: %s\n", inputString);
    return 0;
}
