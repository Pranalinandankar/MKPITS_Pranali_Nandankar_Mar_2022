#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("Enter any integer in between range (0to80):");
	scanf("%d",&num);
	
	if (num>=0&&num<=80)
	{
		printf("number is range between (0to80)");
	}
	else
	if(num<=0)
	{
		printf("Number is negative");
	
	}
	else
	if(num>=80)
	{
		printf("number is out of the range");
	}
	
}
