#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	
	if((100-n)<=10 || (200-n)<=10)
	{
		printf(" True");
	}
	else
	{
		printf(" False");
	}
}
