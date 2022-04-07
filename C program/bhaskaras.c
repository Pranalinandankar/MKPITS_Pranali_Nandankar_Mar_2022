#include<stdio.h>
#include<conio.h>
void main()
{
	double a,b,c,pr1;
	printf("input the first number (a):");
	scanf("%ld",&a);
	printf("input the second number (b):");
	scanf("%d",&b);
	printf("input the third number (c):");
	scanf("%ld",&c);
	
	pr1=(b*b)-(4*(a)*(c));
	
	if(pr1 > 0&&a!=0)
	{
		double x,y;
		pr1=sqrt(pr1);
		x=(-b + pr1)/(2*a);
		y=(-b - pr1)/(2*a);
		print("Root1=%.51f\n",x);
		print("Root2=%.51f\n",y);
	}
	
}
