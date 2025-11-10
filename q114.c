//Q114: Length of longest substring without repeating characters

#include <stdio.h>
#include <stdlib.h>

int length_of_longest_substring(char *s) {
    int index[256];
    for (int i=0; i<256; i++) index[i] = -1;

    int max_len=0, start=0, i=0;
    while (s[i] != '\0') {
        if (index[(int)s[i]] >= start) start = index[(int)s[i]] + 1;
        index[(int)s[i]] = i;
        if (i - start + 1 > max_len) max_len = i - start + 1;
        i++;
    }
    return max_len;
}

int main() {
    char s[] = "abcabcbb";
    printf("%d\n", length_of_longest_substring(s));
    return 0;
}