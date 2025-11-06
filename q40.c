//Q40 Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int binaryNum, temp, digit, onesComplement = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &binaryNum);
  
    temp = binaryNum;
    while (temp != 0) {
        digit = temp % 10;
        if (digit != 0 && digit != 1) {
            printf("Invalid binary number.\n");
            return 1;
        }
        int flippedBit = (digit == 0) ? 1 : 0;
        onesComplement += flippedBit * place;
        place *= 10;
        temp /= 10;
    }
    printf("1's complement of %d is %d\n", binaryNum, onesComplement);
    return 0;
}