#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf("Enter the 1st number ");
	scanf("%d",&n1);
	printf("Enter the 2nd number ");
	scanf("%d",&n2);
	
	if(n1%n2==0)
	{
		printf("\n %d is Multiple of %d",n1,n2);
	}
	else
	{
		printf(" \n %d it is Not a Multiple of %d ",n1,n2);
	}
}

