#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b,c,rev=0;
    if (a>=-231 && a<=231-1)
        if (a<0)
        {
            c=-1*a;
            while (c>0)
            {
                b=c%10;
                rev=(rev*10)+b;
                c=c/10;
            }
            rev*=-1;
            printf("%d",rev);
        }
        else if (a>0)
        {
            c=a;
            while (c>0)
            {
                b=c%10;
                rev=(rev*10)+b;
                c=c/10;
            }
            printf("%d",rev);
        }
        else
        {
            printf("%d",0);
        }
    return 0;
}