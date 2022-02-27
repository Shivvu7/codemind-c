#include<stdio.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    for(i=0;i<n/2;i++)
    {
        if(n==i*i)
        f=1;
    }
    if(f==1)
    printf("True");
    else
    printf("False");
}