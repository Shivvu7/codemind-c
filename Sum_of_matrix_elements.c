#include<stdio.h>
int main ()
{
    int r,c,i,j,a[10][10],s=0;
    scanf("%d",&r);
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)             
        {
            scanf("%d",&a[i][j]);
            s=s+a[i][j];
        }
    }
    printf("%d",s);
}