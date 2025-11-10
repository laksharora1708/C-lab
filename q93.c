// Q93: Check if two strings are anagrams

#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;
  
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    for(i = 0; s1[i] != '\0' && s1[i] != '\n'; i++)
        if(s1[i] >= 'a' && s1[i] <= 'z') freq1[s1[i]-'a']++;
    for(i = 0; s2[i] != '\0' && s2[i] != '\n'; i++)
        if(s2[i] >= 'a' && s2[i] <= 'z') freq2[s2[i]-'a']++;

    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}