#include<stdio.h>
int main()
{
    int n1=0,n2=1,i,n3,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        if(n==n3)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else
    printf("True");
}