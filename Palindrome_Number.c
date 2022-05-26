#include<stdio.h>
int pali(int n)
{
    int d,s=0,t;
    t=n;
    while(n)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    if(t==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,a;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        if(pali(a))
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}