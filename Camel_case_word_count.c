#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int c=1,i;
    for (i=1; i<strlen(str); i++)
    {
        if (str[i]>=65 && str[i]<=90)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}