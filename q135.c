//Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Codes {
    SUCCESS = 10,
    FAILURE = 11,
    TIMEOUT = 12
};

int main() {
    enum Codes c;

    for (c = SUCCESS; c <= TIMEOUT; c++) {
        switch (c) {
            case SUCCESS:
                printf("SUCCESS = %d\n", c);
                break;
            case FAILURE:
                printf("FAILURE = %d\n", c);
                break;
            case TIMEOUT:
                printf("TIMEOUT = %d\n", c);
                break;
        }
    }

    return 0;
}
