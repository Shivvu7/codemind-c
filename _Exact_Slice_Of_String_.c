#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,b;
    char s[100];
    scanf("%[^
]s",s);
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        printf("%c",s[i]);
    }
}