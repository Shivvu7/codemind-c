#include<stdio.h>
int main()
{
    int a,z;
    scanf("%d",&a);
    for (z=0; z<a; z++)
    {
        char str[10000];
        scanf("%s",str);
        long long int flag=0,i;
        for (i=0; str[i]!=NULL; i++)
        {
            if (str[i]>=48 && str[i]<=57)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if (flag==1)
        {   
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}