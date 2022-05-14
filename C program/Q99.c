#include<conio.h>
#include<stdio.h>
void main()
{
	int n1,n2,res1,res2;
	printf("Enter 1st number:");
	scanf("%d",&n1);
	printf("Enter 2nd number:");
	scanf("%d",&n2);
	
	if(n1==n2)
	{
		printf("0");
	}
	else
	{
		res1=n1%5;
		res2=n2%5;
		if(res1==res2)
		{
		
		if(n1<n2)
		{
			printf("%d is smaller",n1);
		}
		else
		{
			printf("%d is smaller",n2);
	    }
	}
	else
	{
		if(n1>n2)
		{
			printf("%d is Greater",n1);
		}
		else
		{
			printf("%d is Greater",n2);
		}
	}
}
}
