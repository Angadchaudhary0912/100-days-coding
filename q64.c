//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
void findMostFrequentDigit(int number) {
    int digitCount[10] = {0};

    
    if (number < 0) {
        number = -number;
    }

    
    if (number == 0) {
        digitCount[0]++;
    }

    
    while (number > 0) {
        int digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }

    
    int maxCount = 0;
    int mostFrequentDigit = -1;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);
}
int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    findMostFrequentDigit(number);

    return 0;
}
