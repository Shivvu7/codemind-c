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
    if (str[6]=='P')
    {
        if (hour==12)
        {
       		if (min<10)
            {
            	printf("%d:%d%d",hour,min,0);
            }
            else
            {
            	printf("%d:%d",hour,min);
            }
        }
		else
		{
			hour+=12;
        if (hour<10)
        {
            if (min<10)
            {
                printf("%d%d:%d%d",0,hour,min,0);
            }
            else
            {
                printf("%d%d:%d",0,hour,min);
            }
        }
        else
        {
            if (min<10)
            {
                printf("%d:%d%d",hour,min,0);
            }
            else
            {
                printf("%d:%d",hour,min);
            }
        }
		}
    }
    else if (str[6]=='A')
    {
        if (hour==12)
        {
        	hour-=12;
        	if (hour>=0)
            {
                if (min<10)
                {
                    printf("%d%d:%d%d",0,hour,min,0);
                }
                else
                {
                    printf("%d%d:%d",0,hour,min);
                }
            }
            else
            {
                if (min<10)
                {
                    printf("%d%d:%d%d",0,hour*-1,min,0);
                }
                else
                {
                    printf("%d%d:%d",0,hour*-1,min);
                }
            }
        	
		}
		else if (hour<10)
        {
            if (hour>=0)
            {
                if (min<10)
                {
                    printf("%d%d:%d%d",0,hour,min,0);
                }
                else
                {
                    printf("%d%d:%d",0,hour,min);
                }
            }
            else
            {
                if (min<10)
                {
                    printf("%d%d:%d%d",0,hour*-1,min,0);
                }
                else
                {
                    printf("%d%d:%d",0,hour*-1,min);
                }
            }
        }
        else
        {
            if (min<10)
            {
                printf("%d:%d%d",hour,min,0);
            }
            else
            {
                printf("%d:%d",hour,min);
            }
        }
    }
    return 0;
}