#include<stdio.h>
#include<conio.h>
void div();
void main()
{
	div();
}

void div()
{
	int n1,n2,res;
	printf("Enter n1:");
	scanf("%d",&n1);
	printf("Enter n2:");
	scanf("%d",&n2);
	res=n1/n2;
	printf("result=%d",res);
}
