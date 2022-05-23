#include<stdio.h>
int main()
{
    int n,a[100],i,d,c=0,k,s=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=a[i];
        if(k!=0)
        {
        while(k)
        {
            d=k%10;
            c++;
            k=k/10;
        }
        }
        else
        {
            c=1;
        }
        s=c;
        {
            c=0;
        }
        printf("%d ",s);
    }
}