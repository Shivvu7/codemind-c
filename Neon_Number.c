#include<stdio.h>
int main ()
{
    int t,n,s=0,d,a;
    scanf("%d",&n);
    a=n*n;
    t=a;
    while(a)
    {
        d=a%10;
        s=s+d;
        a=a/10;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}