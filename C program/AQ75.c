#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,sum;
	printf("Enter  the 1st digit ");
	scanf("%d",&n1);
	printf("Enter the  2nd digit ");
	scanf("%d",&n2);
	
	if(n1==n2)
	{
		sum=(n1+n2)*3;
		printf("Sum = %d",sum);
	}
	else
	{
		printf("Enter digits are Not Same !");
	}
}

