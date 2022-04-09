#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,n3,n4,n5,odd=0;
	printf("Enter n1:");
	scanf("%d",&n1);
	printf("Enter n2:");
	scanf("%d",&n2);
	printf("Enter n3:");
	scanf("%d",&n3);
	printf("Enter n4:");
	scanf("%d",&n4);
	printf("Enter n5:");
	scanf("%d",&n5);
	
	if(n1%2==!0)
	{
		odd=odd+n1;
	}
	if(n2%2==!0)
	{
		odd=odd+n2;
	}
	if(n3%2==!0)
	{
		odd=odd+n3;
	}
	if(n4%2==!0)
	{
		odd=odd+n4;
	}
	if(n5%2==!0)
	{
		odd=odd+n5;
	}
	
		printf("addition of all odd no. %d\n",odd);
	
}
