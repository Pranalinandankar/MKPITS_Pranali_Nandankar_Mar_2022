#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("Enter the size of an  array  \n");
	scanf("%d",&n);
	if(n%2!=0 && n>=1)
	{
		int a[n],t;
		
		for(i=0;i<n;i++)
		{
			printf("Enter the element : ");
			scanf("%d",&a[i]);
		}	
		t=a[0];
		if(t<a[n-1])
		{
			t=a[n-1];
		}
		int mid=n/2;
		if(t<a[mid])
		{
			t=a[mid];
		}
		printf("Largest element of a given array is  %d", t);
	
	}
	else
	{
		printf(" please enter the size of array greater than 1.");
	}
}
