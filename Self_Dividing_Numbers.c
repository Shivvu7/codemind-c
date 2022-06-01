#include<stdio.h>
int self(int num)
{
    int flag=0;
    int temp=num,r;
    while (temp>0)
    {
        r=temp%10;
        if (r==0)
        {
            flag=0;
            break;
        }
        else
        {
            if (num%r==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        temp=temp/10;
    }
    if (flag==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for (a; a<=b; a++)
    {
        if (self(a)==1)
        {
            printf("%d ",a);
        }
    }
    return 0;
}