#include<stdio.h>
int main ()
{
    int n,k=0,i,d;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        d=n%10;
        if(d>k)
        {
            k=d;
        }
        n=n/10;
    }
    printf("%d",k);
}