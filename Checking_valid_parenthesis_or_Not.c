#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i,c=0;
    for (i=0; str[i]!=NULL; i++)
    {
        c++;
    }
    if (str[0]==40 && str[c-1]==41)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}