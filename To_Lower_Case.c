// capital to lower
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],cap;
    scanf("%s",str);
    int i;
    for (i=0; str[i]!=NULL; i++)
    {
    	if (str[i]>=65 && str[i]<=90)
    	{
    		cap=str[i]+32;
			printf("%c",cap);
		}
		else
		{
			printf("%c",str[i]);
		}
	}
    return 0;
}