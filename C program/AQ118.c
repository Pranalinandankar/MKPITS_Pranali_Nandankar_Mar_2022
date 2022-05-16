#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("Enter the size of an array  \n");
	scanf("%d",&n);
	int a[n],count=0;
	for(i=0;i<n;i++)
	{
		printf("Enter the element of array ");
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count=count+1;
		}
	}
	printf("Even no in given array is : %d",count);	
}
