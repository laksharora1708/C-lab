//Q100: Print all substrings of a string

#include <stdio.h>
#include <stdlib.h>

void all_substrings(char *s) {
    int len=0;
    while(s[len]!='\0') len++;
    for (int i=0; i < len; i++) {
        for (int j=i; j < len; j++) {
            for (int k=i; k <= j; k++) putchar(s[k]);
            putchar('\n');
        }
    }
}

int main() {
    char s[] = "abc";
    all_substrings(s);
    return 0;
}