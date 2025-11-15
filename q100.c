//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 100
void printSubstrings(const char *str) {
    int len = strlen(str);
    
    for (int start = 0; start < len; start++) {
        for (int end = start; end < len; end++) {
            for (int k = start; k <= end; k++) {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }
}
int main() {
    const char *str = "abc";
    
    printf("All substrings of \"%s\" are:\n", str);
    printSubstrings(str);
    
    return 0;
}
