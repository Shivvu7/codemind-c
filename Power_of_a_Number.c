#include<stdio.h>
int main()
{
    int r,k,p=1,c,i,j;
    scanf("%d%d%d",&i,&r,&k);
    for(j=1;j<=r;j++)
    {
        p=p*i;
    }
    c=p%k;
    printf("%d",c);
}