#include<stdio.h>
#include<conio.h>

void main()
{
	int num,a,a1,b,c,res;
	printf("Enter 3 digit number:");
	scanf("%d",&a1);
	num=a1;
	
	a=num%10;
	num=num/10;
	
	b=num%10;
	num=num/10;
	
	c=num%10;
	
	res=a*100+b*10+c*1;
	
	if(a1==res)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
}
