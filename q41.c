//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int swapFirstAndLastDigit(int num) {
    
    if (num >= 0 && num < 10) {
        return num;
    }

    int firstDigit = num;
    int lastDigit = num % 10;
    int digitsCount = 0;

    
    while (firstDigit >= 10) {
        firstDigit /= 10;
        digitsCount++;
    }
    digitsCount++; 

    int firstDigitMultiplier = 1;
    for (int i = 0; i < digitsCount - 1; i++) {
        firstDigitMultiplier *= 10;
    }

    
    int middlePart = (num % firstDigitMultiplier) / 10;

    
    int swappedNum = lastDigit * firstDigitMultiplier + middlePart * 10 + firstDigit;

    return swappedNum;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int swappedNumber = swapFirstAndLastDigit(number);
    printf("Number after swapping first and last digit: %d\n", swappedNumber);

    return 0;
}
