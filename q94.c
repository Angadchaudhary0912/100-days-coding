//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
#define MAX_WORD_LENGTH 100
void findLongestWord(const char *sentence, char *longestWord) {
    int maxLength = 0;
    int currentLength = 0;
    const char *wordStart = NULL;
    
    for (const char *ptr = sentence; ; ptr++) {
        if (*ptr != ' ' && *ptr != '\0' && *ptr != '\n') {
            if (wordStart == NULL) {
                wordStart = ptr; 
            }
            currentLength++;
        } else {
            if (wordStart != NULL) {
                
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    strncpy(longestWord, wordStart, currentLength);
                    longestWord[currentLength] = '\0'; 
                }
                
                wordStart = NULL;
                currentLength = 0;
            }
            if (*ptr == '\0') {
                break;
            }
        }
    }
}
int main() {
    const char *sentence = "The quick brown fox jumps over the lazy dog";
    char longestWord[MAX_WORD_LENGTH] = "";
    
    findLongestWord(sentence, longestWord);
    
    printf("The longest word is: \"%s\"\n", longestWord);
    
    return 0;
}
