#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    char se;
    scanf(" %c",&se);
    int i,c=0;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]==se)
        {
            c++;
        }
    }
    if (c>0)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",-1);
    }
    return 0;
}