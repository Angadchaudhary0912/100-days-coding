//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

enum Day {
    SUNDAY,     // 0
    MONDAY,     // 1
    TUESDAY,    // 2
    WEDNESDAY,  // 3
    THURSDAY,   // 4
    FRIDAY,     // 5
    SATURDAY    // 6
};

int main() {
    enum Day d;

    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d ", d); // print integer value
        switch (d) {
            case SUNDAY:    printf("SUNDAY\n"); break;
            case MONDAY:    printf("MONDAY\n"); break;
            case TUESDAY:   printf("TUESDAY\n"); break;
            case WEDNESDAY: printf("WEDNESDAY\n"); break;
            case THURSDAY:  printf("THURSDAY\n"); break;
            case FRIDAY:    printf("FRIDAY\n"); break;
            case SATURDAY:  printf("SATURDAY\n"); break;
        }
    }

    return 0;
}
