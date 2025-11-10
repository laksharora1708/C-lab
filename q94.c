// Q94: Find the longest word in a sentence

#include <stdio.h>

int main() {
    char str[200], word[50];
    int i = 0, j = 0, maxLen = 0, curLen = 0, maxStart = 0, start = 0;
  
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] != ' ') {
            if(curLen == 0) start = i;
            curLen++;
        } else {
            if(curLen > maxLen) {
                maxLen = curLen;
                maxStart = start;
            }
            curLen = 0;
        }
        i++;
    }
    if(curLen > maxLen) {
        maxLen = curLen;
        maxStart = start;
    }
    for(i = 0; i < maxLen; i++) word[i] = str[maxStart + i];
    word[maxLen] = '\0';
    printf("%s\n", word);
    return 0;
}