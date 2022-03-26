#include<stdio.h>
#include<string.h>
int main()
{
    int d=0,i,v=0,k=0,c;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
        {
            d++;
        }
        else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            v++;
        }
        else if(s[i]==' ')
        {
            k++;
        }
    }
    c=strlen(s)-k-d-v;
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d",k);
}