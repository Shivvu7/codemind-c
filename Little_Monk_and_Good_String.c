#include<stdio.h>
#include<string.h>
int vow(char s)
{
    int f=0,i;
    char str[11]={'a','e','i','o','u','A','E','I','O','U',NULL};
    for (i=0; i<10; i++)
    {
        if (str[i]==s)
        {
            f=1;
            break;
        }
    }
    if (f==1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    char str[1000];
    scanf("%s",str);
    int l=strlen(str);
    int i,j,c=0,max=0;
    for (i=0; i<l; i++)
    {
        c=0;
        for (j=i; j<l; j++)
        {
            if (vow(str[j])==1)
            {
                c+=1;
                if (max<c)
                {
                    max=c;
                }
            }
            else
            {
                break;
            }
        }
    }
    printf("%d",max);
    return 0;
}