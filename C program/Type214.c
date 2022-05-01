#include<stdio.h>
#include<conio.h>

void cho()
{
	int n;
	printf("%d",n);
}
void fun()
{
	int choice;
	int num1,num2,res;
	
	printf("press1 for add\n");
	printf("press2 for sub\n");
	printf("press3 for mul\n");
	printf("press4 for div\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("Enter num1:");
		scanf("%d",&num1);
		printf("Enter num2:");
		scanf("%d",&num2);
		res=num1+num2;
		printf("add =%d",res);
	}
	else
	if(choice==2)
	{
		printf("Enter num1:");
		scanf("%d",&num1);
		printf("Enter num2:");
		scanf("%d",&num2);
		res=num1-num2;
		printf("sub=%d",res);
	}
	else
	if(choice==3)
	{
		printf("Enter num1:");
		scanf("%d",&num1);
		printf("Enter num2:");
		scanf("%d",&num2);
		res=num1*num2;
		printf("mult=%d",res);
		
	}
	else
	if(choice==4)
	{
		printf("Enter num1:");
		scanf("%d",&num1);
		printf("Enter num2:");
		scanf("%d",&num2);
		res=num1/num2;
		printf("div=%d",res);
	}
	else
	{
		printf("invalid choice");
	}
}
void main()
{
	fun();
}
