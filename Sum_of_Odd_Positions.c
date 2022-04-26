
#include<stdio.h>
int main()
{
    int n,a[100],os=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2!=0)
        {
            os=os+a[i];
        }
    }
    printf("%d",os);
}
