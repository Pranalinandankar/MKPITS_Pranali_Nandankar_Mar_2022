#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[100],num,j=0;
	printf("Enter the size of an array ");
	scanf("%d",&num);
	printf("Enter the elements of array \n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i=0 ;i<num ; i++)
	{
		if(a[i]==a[i + 1]-1 && a[i]==a[i+2]-2)
		{
			j=1;
			break;
		}
		
	}
	
	if(j==1)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	}
