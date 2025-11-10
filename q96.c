// Q96: Reverse each word in a sentence without changing the word order

#include <stdio.h>

void reverse(char s[], int start, int end) {
    char temp;
    while(start < end) {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;
    char ch;
    while((ch = getchar()) != '\n' && ch != EOF) {
        str[i++] = ch;
    }
    str[i] = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
    reverse(str, start, i - 1);

    printf("%s\n", str);
    return 0;
}