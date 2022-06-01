#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i;
    for (i=0; i<a; i++)
    {
        char str[10000];
        scanf("%s",str);
        int c=0,j;
        for (j=0; str[j]!=NULL; j++)
        {
            if (str[j]>=48 && str[j]<=57)
            {
                c++;
            }
        }
        if (c>0)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
    }
    return 0;
}