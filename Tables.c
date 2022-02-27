#include<stdio.h>
int main()
{
    int a,i,n;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",a,i,a*i);
        }
    }
}