#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	printf("Input co-ordinates(a,b):\n");
	
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	
	if(a>0&&b>0)
	{
		printf("Quadrant -I (+,+)\n");
	}
	else
	if(a>0&&b<0)
	{
	    printf("Quadrant -II (+,-)\n");
	}
	else
	if(a<0&&b>0)
	{
		printf("Quadrant -III (-,+)\n");
	}
	else
	if(a<0&&b<0)
	{
		printf("Quadrant -IV (-,-)\n");
	}
		
	
}
