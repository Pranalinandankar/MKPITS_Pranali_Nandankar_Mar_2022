#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,ser,f=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter num n u want to serch:\n");
	scanf("%d",&ser);
	for(i=0;i<=5;i++)
	{
		if(a[i]==ser)
		{
			f=1;
		}
	}
		if(f==1)
		{
			printf("present");
		}
		else
		{
			printf("Not present");
		}
		
	
}
