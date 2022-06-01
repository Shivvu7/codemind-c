#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int spc=0,i,i1=0,i2=0,j,l=strlen(str);
    for (i=0; i<l; i++)
    {
        if (str[i]>=48 && str[i]<=57)
        {
            continue;
        }
        else if (str[i]>=65 && str[i]<=90)
        {
            continue;
        }
        else if (str[i]>=97 && str[i]<=122)
        {
            continue;
        }
        else
        {
            spc++;
        }
    }
    if (spc%2==0)
    {
        int t=l;
        while (t--)
        {
            for (i=i1; i<l; i++)
            {   
                if (str[i]>=48 && str[i]<=57)
                {
                    if ((str[i]-48)%2==0)
                    {
                        printf("%c",str[i]);
                        i1=i+1;
                        break;
                    }
                }
            }
            for (i=i2; i<l; i++)
            {
                if (str[i]>=48 && str[i]<=57)
                {
                    if ((str[i]-48)%2!=0)
                    {
                        printf("%c",str[i]);
                        i2=i+1;
                        break;
                    }
                }
            }
        }
    }
    else
    {
        int t=l;
        while (t--)
        {
            for (i=i2; i<l; i++)
            {
                if (str[i]>=48 && str[i]<=57)
                {   
                    if ((str[i]-48)%2!=0)
                    {
                        printf("%c",str[i]);
                        i2=i+1;
                        break;
                    }
                }
            }
            for (i=i1; i<l; i++)
            {
                if (str[i]>=48 && str[i]<=57)
                {
                    if ((str[i]-48)%2==0)
                    {
                        printf("%c",str[i]);
                        i1=i+1;
                        break;
                    }
                }
            } 
        }
    }
    return 0;
}