// strictly odd
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int arr[a],i,j,flag=0;
	for (i=0;i<a; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0; i<a; i++)
	{
		if (i%2==1 && arr[i]%2==1)
		{
			flag=1;
		}
		else if (i%2!=1 && arr[i]%2==1)
		{
			flag=0;
			break;
		}
	}
	if (flag==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}