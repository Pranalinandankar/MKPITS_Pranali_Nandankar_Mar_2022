#include<stdio.h>
#include<conio.h>
void main()
{
	int n,n1=51,res,diff;
	printf("Enter any number ");
	scanf("%d",&n);
	
	if(n>n1)
	{
		res=(n-n1)*3;
		printf("Sum = %d",res);
	}
	else
	{
		diff=n1-n;
		printf("Difference = %d",diff);
	}
}
