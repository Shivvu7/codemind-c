#include<stdio.h>
int main()
{
    int a[100][100],m,n,i,j,s=0;
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
        if(i!=m-1-i)
        {
        s+=a[i][m-1-i];
        }
    }
    printf("%d",s);
}