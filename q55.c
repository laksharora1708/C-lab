// Q55: Display prime numbers from 1 to n

#include <stdio.h>

int main() {
    int limit, num, divisor, isPrime;
    scanf("%d", &limit);

    for(num = 2; num <= limit; num++) {
        isPrime = 1;
        for(divisor = 2; divisor*divisor <= num; divisor++) {
            if(num % divisor == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) printf("%d ", num);
    }
    printf("\n");
    return 0;
}