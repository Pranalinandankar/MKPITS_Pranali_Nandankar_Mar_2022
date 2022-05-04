#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter temperature :");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("Temperature is less than 0");
	}
	else 
	 
	if(n>100)
	{
		printf("Temperature is greater than 100");
	}
	
	else
	
	{
		printf("Temperature is less than 0 or greater than 100");
	}
}
