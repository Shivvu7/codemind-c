#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i1=0,i2=0,i,j,l=strlen(str);
    for (i=0; i<=l; i++)
    {
        if (str[i]==32 || str[i]==NULL)
        {
            for (i1=i-1; i1>=i2; i1--)
            {
                printf("%c",str[i1]);
            }
            i2=i+1;
            if (i!=l)
            {
                printf(" ");
            }
        }
    }
    return 0;
}