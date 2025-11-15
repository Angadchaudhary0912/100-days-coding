//Print the initials of a name.
#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 100
void printInitials(const char *name, char *initials) {
    int index = 0;
    int len = strlen(name);
    
    
    if (len > 0 && name[0] != ' ') {
        initials[index++] = name[0];
    }
    
   
    for (int i = 1; i < len; i++) {
        if (name[i] == ' ' && i + 1 < len && name[i + 1] != ' ') {
            initials[index++] = name[i + 1];
        }
    }
    
    initials[index] = '\0'; 
}
int main() {
    const char *name = "John Fitzgerald Kennedy";
    char initials[MAX_NAME_LENGTH] = "";
    
    printInitials(name, initials);
    
    printf("The initials of \"%s\" are: \"%s\"\n", name, initials);
    
    return 0;
}
