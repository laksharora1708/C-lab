#include <stdio.h>
int main()
{
    char str[100];
    int i, j, flag = 1, len = 0;
    printf("Enter a string:\n");
    gets(str);
    while(str[len] != '\0')
    {
        len++;
    }
    j = len - 1;
    for(i = 0; i < j; i++, j--)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        printf("String is a palindrome\n");
    }
    else{
        printf("String is not a palindrome\n");
    }
    return 0;
}