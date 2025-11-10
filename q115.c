//Q115: Check if two strings are anagrams

#include <stdio.h>
#include <stdlib.h>

int is_anagram(char *s, char *t) {
    int count[256] = {0};
    for (int i=0; s[i]!='\0'; i++) count[(int)s[i]]++;
    for (int i=0; t[i]!='\0'; i++) count[(int)t[i]]--;
    for (int i=0; i<256; i++)
        if (count[i] != 0) return 0;
    return 1;
}

int main() {
    char s[] = "listen", t[] = "silent";
    printf(is_anagram(s,t) ? "Anagram\n" : "Not Anagram\n");
    return 0;
}