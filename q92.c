// Q92: Find the first repeating lowercase alphabet in a string

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}, i;
  
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) {
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }
    printf("-1\n");
    return 0;
}