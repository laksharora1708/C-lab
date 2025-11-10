//Q120: Change string to sentence case

#include <stdio.h>
#include <stdlib.h>

void sentence_case(char *s) {
    int i=0;
    while(s[i]==' ') i++;
    if (s[i]>='a' && s[i]<='z')
        s[i] -= 32;
    for (int j=i+1; s[j]!='\0'; j++) {
        if(s[j]>='A' && s[j]<='Z')
            s[j] += 32;
    }
    printf("%s\n", s);
}

int main() {
    char s[] = "hELLO WORLD";
    sentence_case(s);
    return 0;
}