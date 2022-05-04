#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf("Enter 1st Number :");
	scanf("%d",&n1);
	printf("Enter 2nd Number :");
	scanf("%d",&n2);
	
	if(n1%10==n2%10)
	{
		printf("\n Both numbers having same last digit ");;
	}
	else
	{
		printf("\n  Both numbers having  different last digit !");
	}
	
}
