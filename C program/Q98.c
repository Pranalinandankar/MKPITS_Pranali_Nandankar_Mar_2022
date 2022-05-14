#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,res1,res2,res3;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	
	res1=a-b;
	res2=a-c;
	res3=b-c;
	
	if(res1>=20)
	{
		printf("True");
	}
	else
	if(res2>=20)
	{
		printf("True");
	}
	else
	if(res3>=20)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
