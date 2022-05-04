#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[5],n=0;
	printf("Enter five Numbers\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter numbers: ");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==1 && a[i+1]==2 && a[i+2]==3)
		{
			printf("\n Sequence 1 2 3 is appear in an array");
			n=1;
		}
	}
	if(n==0)
	{
		printf("\n Sequence 1 2 3 is not appear in an array : ");
	}
	

	
}
