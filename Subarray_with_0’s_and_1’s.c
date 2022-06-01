#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int j,i1=0,i2=0,mc=0,l=0,r=0,c=0;
    for (i=0; i<a; i++)
    {
        l=0;
        r=0;
        for (j=i; j<a; j++)
        {
            if (arr[j]==0)
            {
                l++;
            }
            if (arr[j]==1)
            {
                r++;
            }
            if (r==l)
            {
                if (mc<r+l)
                {
                    mc=r+l;
                    i1=i;
                    i2=j;
                }
            }
        }
    }
    if (mc==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",i1,i2);
    }
    return 0;
}