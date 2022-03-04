#include<stdio.h>
int main()
{
    int n,d,sum=0,num;
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        d=num%10;
        num=num/10;
        sum+=d;
        
    }
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}