#include<stdio.h>
#include<conio.h>

void main()
{
	int n[5],i,x;
	printf("Enter any number:");
	scanf("%d",&x);
	
	for(i=0;i<5;i++)
	{
		n[i]=x;
		x=3*x;	
	}
	for(i=0;i<5;i++)
	{
		printf("n[%d]=%d\n",i,n[i]);
	}
}
