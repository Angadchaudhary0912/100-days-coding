//Count vowels and consonants in a string.
#include <stdio.h>
int isVowel(char ch) {
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; // Convert to lowercase
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main() {
    char inputString[256];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    for (int i = 0; inputString[i] != '\0'; i++) {
        char ch = inputString[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (isVowel(ch)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}
