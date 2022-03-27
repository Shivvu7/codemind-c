#include<stdio.h>
int main ()
{
    int d,s=0,n,k;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    k=s%9;
    if(s<10)
    {
    printf("%d",s);
    }
    else
    {
        printf("%d",k);
    }
}