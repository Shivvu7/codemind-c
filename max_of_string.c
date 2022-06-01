#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,m=0;
    char max;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]>m)
        {
            max=str[i];
            m=str[i];
        }
    }
    printf("%c",max);
    return 0;
}