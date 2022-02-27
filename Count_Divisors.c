#include<stdio.h>
int main()
{
    int i,r,k,c=0,j;
    scanf("%d%d%d",&i,&r,&k);
    for(j=i;j<=r;j++)
    {
        if(j%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}