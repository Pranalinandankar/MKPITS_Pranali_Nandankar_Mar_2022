#include<stdio.h>
#include<conio.h>
void main()
{
//	when value is apprear in  three time in a row is an array it is called triple

	int i,a[5],n=0;
	printf("Enter any Five Numbers \n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter number ");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<5;i++)
	{
		int k=a[i];
		
		if(a[i]==k && a[i+1]==k && a[i+2]==k)
		{
			printf("Triple");
			n=1;
		}
	}
	if(n==0)
	{
		printf("Not Triple");
	}
		
}
