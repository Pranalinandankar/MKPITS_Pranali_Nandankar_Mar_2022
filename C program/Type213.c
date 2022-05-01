#include<stdio.h>
#include<conio.h>
void prime()
{
	int n;
	printf("%d",n);
}
void fun()
{
	int num,i,m=0;
	printf("Enter any number:");
	scanf("%d",&num);
	i=1;
	do
	{
		if(num%i==0)
		{
			m=m+1;
		}
		i++;
	}	while(i<=num);
	if(m==2)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is Not prime number",num);
	}	
}
void main()
{
	fun();
}
