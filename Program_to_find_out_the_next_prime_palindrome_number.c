#include<stdio.h>
int main()
{
    int m,n,i,rem,res,q,s;
    scanf("%d",&m);
    for(n=m+1;n<=100000;n++)
    {
        s=1;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                s=0;
                break;
            }
        }
        if(s==1)
        {
            res=0;
            q=n;
            while(q>0)
            {
                rem=q%10;
                res=(res*10)+rem;
                q=q/10;
            
            }
            if(res==n)
            {
                printf("%d",n);
                break;
            }
        }
    }
}