//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
   
    if (len1 != len2) {
        return false;
    }
    
    
    char concatenated[2 * len1 + 1];
    strcpy(concatenated, str1);
    strcat(concatenated, str1);
    
   
    return strstr(concatenated, str2) != NULL;
}
int main() {
    const char *str1 = "waterbottle";
    const char *str2 = "erbottlewat";
    
    if (isRotation(str1, str2)) {
        printf("\"%s\" is a rotation of \"%s\".\n", str2, str1);
    } else {
        printf("\"%s\" is not a rotation of \"%s\".\n", str2, str1);
    }
    
    return 0;
}
