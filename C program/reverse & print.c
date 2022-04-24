#include<stdio.h>
#include<conio.h>

void main()
{
	int a,n;
	printf("Enter any number:");
	scanf("%d",&a);
	while(a>0)
	{
		n=a%10;
		printf("%d",n);
		a=a/10;
	}
}
