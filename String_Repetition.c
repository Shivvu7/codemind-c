#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    long long int rep,count=0;
    scanf("%lld",&rep);
    long long int i,c=0,ac=0;
    long long int l,k;
    for (i=0; str[i]!=NULL; i++)
    {
        c++;
    }
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]=='a')
        {
            ac++;
        }
    }
    l=rep/c;
    k=rep%c;
    count=l*ac;
    for (i=0; i<k; i++)
    {
        if (str[i]=='a')
        {
            count+=1;
        }
    }
    printf("%lld",count);
    return 0;
}