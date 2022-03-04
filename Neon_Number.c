#include<stdio.h>
int main()
{
    int num,d,sum=0,sqr;
    scanf("%d",&num);
    sqr=num*num;
    while(sqr)
    {
        d=sqr%10;
        sum+=d;
        sqr=sqr/10;
    }
    if(sum==num)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}