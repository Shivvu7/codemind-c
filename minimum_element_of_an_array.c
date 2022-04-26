
#include<stdio.h>
int main()
{
    int c=0,s=0,n,a[100],i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        k=a[0];
        if(k>a[i])
        {
            k=a[i];
        }
    }
    printf("%d",k);
}


