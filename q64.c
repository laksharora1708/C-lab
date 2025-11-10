// Q64: Most frequent digit in a number

#include <stdio.h>

int main() {
    int n, d, freq[10] = {0}, i, max = 0, digit = 0;
    scanf("%d", &n);
  
    if(n == 0) freq[0]++;
    if(n < 0) n = -n;
    while(n > 0) {
        d = n % 10;
        freq[d]++;
        n /= 10;
    }
    for(i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            digit = i;
        }
    }
    printf("%d\n", digit);
    return 0;
}