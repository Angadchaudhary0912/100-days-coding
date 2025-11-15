//check if a string is a palindrome.
#include <stdio.h>
int isPalindrome(const char *str) {
    int start = 0;
    int end = 0;
    while (str[end] != '\0') {
        end++;
    }
    end--; 

    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
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

    if (isPalindrome(inputString)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
