//Toggle case of each character in a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // Convert to lowercase
        }
    }

    printf("Toggled case string: %s", str);

    return 0;
}
