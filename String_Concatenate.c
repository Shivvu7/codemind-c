#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    scanf("%s",str1);
    char str2[100];
    scanf("%s",str2);
    int i,j;
    strcat(str1,str2);
    int l=strlen(str1);
    char arr[l];
    for (i=0; i<l; i++)
    {
        arr[i]=str1[i];
    }
    for (i=0; i<l; i++)
    {
        for (j=0; j<l-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                char t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for (i=0; i<l; i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}