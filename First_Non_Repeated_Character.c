#include<stdio.h>
#include<string.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for (k=0; k<t; k++)
    {
        int a;
        scanf("%d",&a);
        char str[a+1];
        scanf("%s",str);
        char res;
        int i,j,c=0;
        for (i=0; i<a; i++)
        {
            int f=0;
            for (j=0; j<a; j++)
            {
                if (i!=j)
                {
                    if (str[i]==str[j])
                    {
                        f=1;
                        break;
                    }
                }
            }
            if (f==0)
            {
                printf("%c
",str[i]);
                c++;
                break;
            }
        }
        if (c==0)
        {
            printf("-1
");
        }
    }
    return 0;
}