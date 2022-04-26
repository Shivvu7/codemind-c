#include<stdio.h>
int main()
{
    int c=0,s=0,n,a[100],i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    k=s/n;
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

