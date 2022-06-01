#include<stdio.h>
#include<string.h>
int vow(char s)
{
    int f=0;
    char v[10]={'a','e','i','o','u','A','E','I','O','U'};
    int i;
    for (i=0; i<10; i++)
    {
        if (v[i]==s)
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
    char str[1000];
    scanf("%[^
]s",str);
    int sc=1,i,j,i1=0,i2=0,c=1;
    int l=strlen(str);
    for (i=0; i<=l; i++)
    {
        if (str[i]==32 || str[i]==NULL)
        {
            if (vow(str[i1])==1)
            {
                for (j=i1; j<i; j++)
                {
                    printf("%c",str[j]);
                }
                printf("ma");
                for (j=0; j<c; j++)
                {
                    printf("a");
                }
                i1=i+1;
            }
            else
            {
                for (j=i1+1; j<i; j++)
                {
                    printf("%c",str[j]);
                }
                printf("%c",str[i1]);
                printf("ma");
                for (j=0; j<c; j++)
                {
                    printf("a");
                }
                i1=i+1;
            }
            c++;
            printf(" ");
        }
    }
    return 0;
}