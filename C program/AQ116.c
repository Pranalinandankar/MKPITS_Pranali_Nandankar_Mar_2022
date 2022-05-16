#include<stdio.h>
#include<conio.h>
void main()
{
	float n1,n2,sum,sub,mul,div;
	printf("Enter the 1st number : ");
	scanf("%f",&n1);
	printf("Enter the 2nd number : ");
	scanf("%f",&n2);	
	sum=n1+n2;
	sub=n1-n2;
	mul=n1*n2;
	div=n1/n2;
	printf("Addition = %f\n",sum);
	printf("Substraction = %f\n",sub);
	printf("Multiplication = %f\n",mul);
	printf("Division = %f",div);
}
