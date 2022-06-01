#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int i,n=0,c1=0,c2=0,count=0;
    for (i=0; s[i]!=NULL; i++)
    {
        n++;
    }
    for (i=0; i<n; i++)
    {
        if (s[i]=='R')
        {
            c1++;
        }
        else if (s[i]=='L')
        {
            c2++;
        }
        if (c1==c2)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}