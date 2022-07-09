#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000];
    scanf("%s",arr);
    int ma=0,c=0;
    int i,j;
    for (i=0; i<strlen(arr); i++)
    {
        c=0;
        for (j=i; j<strlen(arr); j++)
        {
            if (arr[j]==arr[i] && arr[j-1]==arr[i] && i>0)
            {
                c++;
                if (ma<c)
                {
                    ma=c;
                }
            }
            else
            {
                break;
            }
        }
    }
    printf("%d",ma+1);
    return 0;
}