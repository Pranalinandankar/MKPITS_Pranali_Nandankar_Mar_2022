#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter the size of an array  \n");
	scanf("%d",&n);
	if(n>=1)
	{
		int a[n],t;
		for(int i=0;i<n;i++)
		{
			printf("Enter the element  ");
			scanf("%d",&a[i]);
		}	
		t=a[0];
		a[0]=a[n-1];
		a[n-1]=t;
		printf("\n New array after the swapping is  ");
		for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
	
	}
	else
	{
		printf(" please enter the size of array greater than 1.");
	}
}
