#include<stdio.h>
int prime(int num)
{
    int i;
    for (i=2; i*i<=num; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a;
    scanf("%d",&a);
    int diff1=0,diff2=0,i,p1,p2;
    for (i=a+1; i<=10000; i++)
    {
        if (prime(i)==1)
        {
            diff1=i-a;
            p1=i;
            break;
        }
    }
    for (i=a; i>0; i--)
    {
        if (prime(i)==1)
        {
            diff2=a-i;
            p2=i;
            break;
        }
    }
    if (diff1>diff2)
    {
        printf("%d",diff2);
    }
    else if (diff1<diff2)
    {
        printf("%d",diff1);
    }
    else
    {
        printf("%d",diff2);
    }
    return 0;
}