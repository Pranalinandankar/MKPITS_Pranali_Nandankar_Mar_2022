#include<stdio.h>
#include<conio.h>
void main()
{
	int num,n1,rev;
	printf("Enter n digit no:");
	scanf("%d",&num);
	
	do
	{
		n1=num%10;
		rev=rev*10+n1;
		num=num/10;
	}while(num>0);
	printf("%d",rev);
}
