#include<stdio.h>
int main()
{
    int c=0,n,i,a[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>0;i--)
    {
        if(a[i]%2!=0)
        {
            k=a[i];
            break;
        }
    }
    printf("%d",k);
}