#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[2];
	
	printf("Enter 3 number");
	for(i=0;i<=2;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=%d",i,a[i]);
	}
}
