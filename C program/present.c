#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,ser;
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
			printf("present\n");
		}
	}
}
