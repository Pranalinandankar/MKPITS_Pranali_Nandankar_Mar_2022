#include<stdio.h>
#include<conio.h>
void main()
{
	int num,n1,rev;
	printf("Enter n digit no:");
	scanf("%d",&num);
	
	while(num>0)
	{
		n1=num%10;
		rev=rev*10+n1;
		num=num/10;
	}
	printf("%d",rev);
}
