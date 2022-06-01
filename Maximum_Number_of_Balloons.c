#include<stdio.h>
int main()
{
    char str[10000];
    scanf("%[^
]s",str);
    int b=0,a=0,l=0,o=0,n=0,nob=0,i;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]=='b')
        {
            b+=1;
        }
        if (str[i]=='a')
        {
            a+=1;
        }
        if (str[i]=='l')
        {
            l+=1;
        }
        if (str[i]=='o')
        {
            o+=1;
        }
        if (str[i]=='n')
        {
            n+=1;
        }
    }
    while (b>0 && a>0 && l>0 && o>0 && n>0)
    {
        b-=1;
        a-=1;
        l-=2;
        if (l<0)
        {
            break;
        }
        o-=2;
        if (o<0)
        {
            break;
        }
        n-=1;
        nob++;
    }
    printf("%d",nob);
    return 0;
}