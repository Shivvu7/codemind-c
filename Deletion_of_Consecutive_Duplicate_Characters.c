#include<stdio.h>
int main()
{
    int q,j;
    scanf("%d",&q);
    for (j=0; j<q; j++)
    {
        char str[110];
        scanf("%s",str);
        int i,c=0;
        for (i=0; str[i]!=NULL; i++)
        {
            if (str[i]==str[i+1])
            {
                c++;
            }
        }
        printf("%d
",c);  
    }
    return 0;
}