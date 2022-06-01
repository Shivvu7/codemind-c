#include<stdio.h>
int main()
{
    char str[10];
    scanf("%[^
]s",str);
    int hour=0,min=0;
    int i;
    hour=(str[0]-48)*10 + str[1]-48;
    min=(str[3]-48)*10 + str[4]-48;
    if (hour==24)
    {
    	hour-=12;
    	if (min>9)
    	{
			printf("%d:%d AM",hour,min);	
		}
		else
		{
			printf("%d:%d%d AM",hour,0,min);
		}
    	
	}
    else if (hour>11)
    {
    	if (hour==12)
    	{
    		if (min>9)
    		{
				printf("%d:%d PM",hour,min);	
			}
			else
			{
				printf("%d:%d%d PM",hour,0,min);
			}
		}
    	else
    	{
    		hour-=12;
			if (hour<10)
			{
				if (min>9)
    			{
					printf("%d%d:%d PM",0,hour,min);	
				}
				else
				{
					printf("%d%d:%d%d PM",0,hour,0,min);
				}
			}
			else
			{
				if (min>9)
    			{
					printf("%d:%d PM",hour,min);	
				}
				else
				{
					printf("%d:%d%d PM",hour,0,min);
				}
			}
		}
	}
	else if (hour==0)
	{
		hour+=12;
		if (min>9)
    	{
			printf("%d:%d AM",hour,min);	
		}
		else
		{
			printf("%d:%d%d AM",hour,0,min);
		}
	}
	else
	{
		if (hour<10)
		{
			if (min>9)
    		{
				printf("%d%d:%d AM",0,hour,min);	
			}
			else
			{
				printf("%d%d:%d%d AM",0,hour,0,min);
			}
		}
		else
		{
			if (min>9)
    		{
				printf("%d:%d AM",hour,min);	
			}
			else
			{
				printf("%d:%d%d AM",hour,0,min);
			}
		}
	}
    return 0;
}