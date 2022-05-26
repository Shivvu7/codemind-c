#include<stdio.h>
int main()
{
    int t,n,i,f=1,s=0,d;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        d=n%10;
        for (i=1;i<=d;i++)
        {
            f=f*i;
        }
        s=s+f;
        f=1;
        n=n/10;
    }
    if(t==s)
    {
    printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
}