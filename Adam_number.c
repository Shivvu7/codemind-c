#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b,rev=0,temp,sq1,sq2,sum=0;
    int i;
    temp=a;
    sq1=a*a;
    while (temp>0)
    {
        b=temp%10;
        rev=(rev*10)+b;
        temp=temp/10;
    }
    sq2=rev*rev;
    rev=0;
    temp=sq2;
    while (temp>0)
    {
        b=temp%10;
        rev=(rev*10)+b;
        temp=temp/10;
    }
    if (rev==sq1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
    
}