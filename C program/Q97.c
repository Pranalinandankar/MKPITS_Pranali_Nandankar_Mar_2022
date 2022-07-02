#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	printf("Enter value of z:");
	scanf("%d",&z);
	
	if(y>x)
	{
		printf("y is greater than x");
	}
	if(z>y)
	{
		printf("z is greater than y");
	}
}
