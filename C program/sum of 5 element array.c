#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],n,sum=0;
	printf("Enter the 5 integer number :\n");
	for(n=1;n<=5;n++)
	{
		scanf("%d",&a[n]);
	}
	for(n=5;n>1;n--)
	{
		sum=sum+a[n];
	}
	printf("Addition of array integer %d",sum);
}
