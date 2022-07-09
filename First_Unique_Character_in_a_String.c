#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i,j,len=0;
    for (i=0; str[i]!=NULL; i++)
    {
        len++;
    }
    int index=0,cc=0;
    for (i=0; i<len; i++)
    {
        int flag=0;
        for (j=0; j<len; j++)
        {
            if (i!=j)
            {
                if (str[i]==str[j])
                {
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                }
            }
        }
        if (flag==1)
        {
            index=i;
            printf("%d",index);
            cc++;
            break;
        }
    }
    if (cc==0)
    {
        printf("-1");
    }
    return 0;
}