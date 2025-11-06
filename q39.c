//Q39 Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, product = 1, remainder;
    int foundOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            foundOdd = 1;
        }
        num /= 10;
    }
    if (foundOdd)
        printf("Product of odd digits is: %d\n", product);
    else
        printf("No odd digits found in the number.\n");
    return 0;
}