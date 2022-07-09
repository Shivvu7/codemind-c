#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int inc=0,dec=strlen(str),i;
    for (i=0; i<strlen(str); i++)
    {
        if (str[i]=='I')
        {
            printf("%d ",inc);
            inc++;
        }
        else
        {
            printf("%d ",dec);
            dec--;
        }
    }
    printf("%d",inc);
    return 0;
}