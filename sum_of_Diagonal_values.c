#include<stdio.h>
int main()
{
    int a[100][100],i,j,m,n,s=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
            {
                s+=a[i][j];
            }
        }
        if (i!=n-i-1)
        {
        s+=a[i][n-i-1];
        }
    }
    printf("%d",s);
}