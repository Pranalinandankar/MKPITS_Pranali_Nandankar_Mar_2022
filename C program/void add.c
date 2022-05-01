#include<stdio.h>
#include<conio.h>
void add();
void main()
{
	add();
}

void add()
{
	int n1,n2,res;
	printf("Enter n1:");
	scanf("%d",&n1);
	Printf("Enter n2:");
	scanf("%d",&n2);
	res=n1+n2;
	printf("%d",res);
}
