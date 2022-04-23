#include<stdio.h>
int main ()
{
    int n,k=0,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i*i==n)
        {
            k=1;
        }
    }
    if(k==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}