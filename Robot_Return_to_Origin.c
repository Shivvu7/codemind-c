#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i,u=0,d=0,l=0,r=0;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]=='U')
        {
            u++;
        }
        else if (str[i]=='D')
        {
            d++;
        }
        else if (str[i]=='L')
        {
            l++;
        }
        else if (str[i]=='R')
        {
            r++;
        }
    }
    if (u==d && l==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}