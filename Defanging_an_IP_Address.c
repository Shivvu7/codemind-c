#include<stdio.h>
int main()
{
    char str[20];
    scanf("%[0-9,.]s",str);
    int i;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]=='.')
        {
            printf("[.]");
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}