#include<stdio.h>
#include<string.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for (k=0; k<t; k++)
    {
        char a[110];
        scanf("%s",a);
        int l=strlen(a);
        int f=0,j;
        for (j=0; j<l-1; j++)
        {
            if (a[j]==a[l-j-1])
            {
                f=1;
            }
            else
            {
                f=0;
                break;
            }
        }
        if (f==1)
        {
            if (l%2==0)
            {
                printf("YES EVEN
");
            }
            else
            {
                printf("YES ODD
");
            }
        }
        else
        {
            printf("NO
");
        }
    }
    return 0;
}