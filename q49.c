// Q49: Print pattern of numbers starting from i up to 5, with i decreasing from 5

#include <stdio.h>

int main() {
    int i, j;
  
    for(i = 5; i >= 1; i--) {
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}