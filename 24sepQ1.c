#include <stdio.h>
int main()
{
    char str[200];
    int i, count=1;
    printf("Enter a string:\n");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("Total words = %d\n", count);
    return 0;
}