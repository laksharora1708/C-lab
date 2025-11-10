// Q83: Count vowels and consonants in a string

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
  
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}