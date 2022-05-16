#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,i;
	printf("Enter the size of an array  \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the element of array ");
		scanf("%d",&a[i]);
		if(a[i]!=17)
		{
			sum=sum+a[i];	
		}
	}
	printf("sum of given array except 17 is %d",sum);
}
