#include<stdio.h>
int main ()
{
    int n,s=0,d,p=1;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    if(s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}