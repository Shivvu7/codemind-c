#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]>=48 && str[i]<=57)
        {
            int num=str[i]-48;
            if (num%2==1)
            {
                printf("%d",num*num);
            }
        }
    }
    return 0;
}