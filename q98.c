//print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 100
void printInitialsWithSurname(const char *name, char *result) {
    int index = 0;
    int len = strlen(name);
    int lastSpaceIndex = -1;

  
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
        }
    }

    
    if (len > 0 && name[0] != ' ') {
        result[index++] = name[0];
        result[index++] = '.';
    }

    for (int i = 1; i < len; i++) {
        if (name[i] == ' ' && i + 1 < len && name[i + 1] != ' ' && i < lastSpaceIndex) {
            result[index++] = name[i + 1];
            result[index++] = '.';
        }
    }

   
    if (lastSpaceIndex != -1 && lastSpaceIndex + 1 < len) {
        result[index++] = ' ';
        for (int i = lastSpaceIndex + 1; i < len; i++) {
            result[index++] = name[i];
        }
    }

    result[index] = '\0'; 
}
int main() {
    const char *name = "John Fitzgerald Kennedy";
    char result[MAX_NAME_LENGTH] = "";
    
    printInitialsWithSurname(name, result);
    
    printf("The formatted name is: \"%s\"\n", result);
    
    return 0;
}
