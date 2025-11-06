//Q-31 Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int n, i;
    int arr[32];
    int index = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }
    while(n > 0) {
        arr[index++] = n % 2;
        n = n / 2;
    }

    printf("Binary representation: ");
    for(i = index - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}