#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i,m=0;
	printf("Enter any number:");
	scanf("%d",&num);
	i=1;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			m=m+1;
		}
	}
	if(m==2)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is Not prime number",num);
	}
}
