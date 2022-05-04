#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,sum;
	
	printf("Enter  the 1st Number ");
	scanf("%d",&n1);
	printf("Enter the 2nd Number  ");
	scanf("%d",&n2);
	
	sum=n1+n2;
	if(n1==30 || n2==30 || sum==30)
	{
		printf(" True");
	}
	else
	{
		printf("False");
	}
}
