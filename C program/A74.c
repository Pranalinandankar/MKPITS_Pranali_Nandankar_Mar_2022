#include<stdio.h>
#include<conio.h>

void main()
{
	int num,a,a1,b,c,d,e,res;
	printf("Enter 5 digit number:");
	scanf("%d",&a1);
	num=a1;
	
	a=num%10;
	num=num/10;
	
	b=num%10;
	num=num/10;
	
	c=num%10;
	num=num/10;
	
	d=num%10;
	num=num/10;
	
	e=num%10;
	
	res=a*10000+b*1000+c*100+d*10+e*1;
	
	if(a1==res)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
}
