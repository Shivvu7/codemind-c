#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int val=0,i,j;
    int len=strlen(str);
    for (i=0; i<len; i++)
    {
        if (str[i]=='I')
            val+=1;
        if (str[i]=='V')
            if (str[i-1]=='I')
                val+=3;
            else
                val+=5;
        if (str[i]=='X')
            if (str[i-1]=='I')
                val+=8;
            else
                val+=10;
        if (str[i]=='L')
            if (str[i-1]=='X')
                val+=30;
            else
                val+=50;
        if (str[i]=='C')
            if (str[i-1]=='X')
                val+=80;
            else
                val+=100;
        if (str[i]=='D')
            if (str[i-1]=='C')
                val+=300;
            else
                val+=500;
        if (str[i]=='M')
            if (str[i-1]=='C')
                val+=800;
            else
                val+=1000;
    }
    printf("%d",val);
    return 0;
}