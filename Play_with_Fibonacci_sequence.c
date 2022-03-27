#include<stdio.h>
int main ()
{
    int i,a=0,b=1,c,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
    }
}