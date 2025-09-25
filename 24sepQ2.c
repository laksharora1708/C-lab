#include <stdio.h>
int main(){
    char str[200];
    int i, a=0, d=0, s=0;
    printf("Enter a string:\n");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            a++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            d++;
        }
        else{
            s++;
        }
    }
    printf("Alphabets = %d\n", a);
    printf("Digits = %d\n", d);
    printf("Special characters = %d\n", s);
    return 0;
}