// Q53: Print a diamond-shaped star pattern

#include <stdio.h>

int main() {
    int i, j;
    int max_stars = 5;
  
    for(i = 1; i <= max_stars; i += 2) {
        for(j = 0; j < i; j++) printf("*");
        printf("\n");
    }
    for(i = max_stars - 2; i >= 1; i -= 2) {
        for(j = 0; j < i; j++) printf("*");
        printf("\n");
    }
    return 0;
}