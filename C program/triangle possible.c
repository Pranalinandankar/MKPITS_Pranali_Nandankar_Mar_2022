#include<stdio.h>
#include<conio.h>

void main()
{
	float a,b,c,p;
	
	printf("Enter value of a:");
	scanf("%f",&a);
	printf("Enter value of b:");
	scanf("%f",&b);
	printf("Enter value of c:");
	scanf("%f",&c);
	
	if(a>b)
	{
		p=a;
		a=b;
		b=p;
	}
	
	if(a<(b+c)&&b<(a+c)&&c<(a+b))
	{
		printf("Multiply");
	}
	else
	{
		printf("Not Multiply");
	}
	
	
}
