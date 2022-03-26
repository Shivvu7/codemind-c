#include<stdio.h>
#include<string.h>
int main()
{
    int c=0,i;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
        {
            c=c+s[i]-48;
        }
    }
    printf("%d",c);
}