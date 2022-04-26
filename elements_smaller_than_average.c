#include<stdio.h>
int main()
{
    int c=0,n,i,a[100],k,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    k=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=k)
        {
            c++;
        }
    }
    printf("%d",c);
}