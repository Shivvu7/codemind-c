#include<stdio.h>
int main()
{
    int i,j,a,b,s=0,arr[100][100];
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        s=0;
        for(j=0;j<b;j++)
        {
            s=s+arr[i][j];
        }
        printf("%d ",s);
    }
}