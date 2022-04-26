
#include<stdio.h>
int main()
{
    int s=0,n,a[100],os=0,i,es=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            os=os+a[i];
        }
        else
        {
            es=es+a[i];
        }
    }
    printf("%d",es);
}

