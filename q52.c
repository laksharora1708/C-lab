// Q52: Print the given star pattern

#include <stdio.h>

int main() {
    int i;
    printf("*\n\n");

    for(i = 0; i < 4; i++) {
        printf("*\n");
    }
    printf("\n");

    for(i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n");

    for(i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");
    printf("*\n");
    return 0;
}