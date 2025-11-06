//Q41 Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digitsCount = 0, temp, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    lastDigit = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        digitsCount++;
    }
    firstDigit = temp;
    if (digitsCount == 0) {
        printf("Swapped number: %d\n", num);
        return 0;
    }
    temp = num % (int)pow(10, digitsCount + 1);
    temp /= 10;
    swappedNum = lastDigit * (int)pow(10, digitsCount) + temp * 10 + firstDigit;
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}
