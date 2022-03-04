#include<stdio.h>
int main()
{
    int n,d,res1=0,res2=0,res3=0,res4=0,d1;
    scanf("%d",&n);
    res1=n*n;
    while(n)
    {
        d=n%10;
        res2=res2*10+d;
        n=n/10;
    }
    res3=res2*res2;
    while(res3)
    {
        d1=res3%10;
        res4=res4*10+d1;
        res3=res3/10;
    }
    if(res1==res4)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}