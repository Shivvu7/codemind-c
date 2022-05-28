#include<stdio.h>
int main()
{
    int n,i,j,a[10][10],s=0,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
            {
                s=s+a[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        p+=a[i][n-1-i];
    }
    printf("Principal Diagonal:%d
Secondary Diagonal:%d",s,p);
}