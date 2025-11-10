// Q85: Reverse a string

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;
  
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') i++;
    for(j = i - 1; j >= 0; j--) printf("%c", str[j]);
    printf("\n");
    return 0;
}
