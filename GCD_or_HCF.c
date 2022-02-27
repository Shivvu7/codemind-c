#include<stdio.h>
int main ()
{
    int i,a,b,m,s=1;
    scanf("%d%d",&a,&b);
    if(a>=b)
    m=a;
    else
    m=b;
    for(i=1;i<m;i++)
    {
        if(a%i==0&&b%i==0)
        {
            if(s<i)
            {
                s=i;
            }
        }
    }
    printf("%d",s);
}