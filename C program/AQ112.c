#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("Enter the size of an array \n");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		int a[n];
		
		for(i=0;i<n;i++)
		{
			printf("Enter the element of array ");
			scanf("%d",&a[i]);
		}	
		int mid=n/2;
		int b[2];
		b[0]=a[mid-1];
		b[1]=a[mid];
		for(i=0;i<2;i++)
		{
			printf("%d ",b[i]);
		}
	
	}
	else
	{
		printf(" please enter the even size of array");
	}
}
