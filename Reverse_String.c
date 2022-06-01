#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i,j,l=strlen(str);
    int i1=l-1,i2=l-1;
    for (i=l-1; i>=0; i--)
    {
        if (str[i]==32 || i==0)
        {
            if (i==0)
            {
                for (j=i; j<=i2; j++)
                {
                    printf("%c",str[j]);
                }
            }
            else
            {
                for (j=i+1; j<=i2; j++)
                {
                    printf("%c",str[j]);
                }
            }
            i2=i-1;
            if (i>0)
            {
                printf(" ");
            }
        }
    }
    return 0;
}