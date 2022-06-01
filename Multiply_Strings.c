#include<stdio.h>
int main()
{
    char str1[120];
    scanf("%s",str1);
    char str2[120];
    scanf("%s",str2);
    long long int num1=0,num2=0,i;
    for (i=0; str1[i]!=NULL; i++)
    {
        if (str1[i]>=47 && str1[i]<=57)
        {
            num1=(num1*10)+str1[i]-48;
        }
    }
    for (i=0; str2[i]!=NULL; i++)
    {
        if (str2[i]>=47 && str2[i]<=57)
        {
            num2=(num2*10)+str2[i]-48;
        }
    }
    long long int pro=num1*num2;
    printf("%lld",pro);
    return 0;
}