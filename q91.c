// Q91: Remove all vowels from a string

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0;
  
    fgets(str, sizeof(str), stdin);
    char result[100];
    while(str[i] != '\0' && str[i] != '\n') {
        if(!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
            result[j++] = str[i];
        i++;
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}
