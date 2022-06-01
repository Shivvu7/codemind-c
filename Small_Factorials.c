#include<stdio.h>
int fun(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,a;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        printf("%d
",fun(a));
    }
}