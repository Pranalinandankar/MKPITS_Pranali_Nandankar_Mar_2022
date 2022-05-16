#include<stdio.h>
#include<conio.h>
void main()
{
	int n1[3],n2[3],s1=0,s2=0,i;
	printf("Enter the 1st array  \n");
	for(i=0;i<3;i++)
	{
		printf("Enter the element ");
		scanf("%d",&n1[i]);
		s1=s1+n1[i];
	}


	printf("\n");
	printf("Enter the 2nd array  \n");
	for(i=0;i<3;i++)
	{
		printf("Enter the element ");
		scanf("%d",&n2[i]);
		s2=s2+n2[i];
	}
	if(s1>s2)
	{
		printf("Largest sum of array is  \n");
		for(i=0;i<3;i++)
		{
		printf("%d ",n1[i]);
		}	
	}
	else
	{
		printf("The largest sum of  array is  \n");
		for(i=0;i<3;i++)
		{
			printf(" %d ",n2[i]);
		}		
	}	
} 

