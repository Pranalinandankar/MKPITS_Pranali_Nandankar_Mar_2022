#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i,m=0;
	printf("Enter any number:");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
		if(num%i==0)
		{
			m=m+1;
		}
		i++;
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
