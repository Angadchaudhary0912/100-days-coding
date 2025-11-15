//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
#define MAX_SENTENCE_LENGTH 1000
void reverseWordsInSentence(const char *sentence, char *reversedSentence) {
    int len = strlen(sentence);
    int start = 0, end = 0, index = 0;

    while (end <= len) {
        if (sentence[end] == ' ' || sentence[end] == '\0') {
            for (int i = end - 1; i >= start; i--) {
                reversedSentence[index++] = sentence[i];
            }
            if (sentence[end] == ' ') {
                reversedSentence[index++] = ' ';
            }
            start = end + 1;
        }
        end++;
    }
    reversedSentence[index] = '\0';
}
int main() {
    const char *sentence = "Hello World from C programming";
    char reversedSentence[MAX_SENTENCE_LENGTH];

    reverseWordsInSentence(sentence, reversedSentence);

    printf("Original Sentence: \"%s\"\n", sentence);
    printf("Reversed Words Sentence: \"%s\"\n", reversedSentence);

    return 0;
}   
