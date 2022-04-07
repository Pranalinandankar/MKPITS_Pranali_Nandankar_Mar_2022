#include<stdio.h>
#include<conio.h>

void main()
{
	char id;
	int hour;
	float value ,salary;
	printf("Enter the Employees ID:");
	scanf("%s",&id);
	printf("Enter the working hour:");
	scanf("%d",&hour);
	printf("Enter salary amount:");
	scanf("%f",&value);
	salary=value*hour;
	printf("\nEmployees ID=%s\nsalary=U$%.21f\n",id,salary);

}
