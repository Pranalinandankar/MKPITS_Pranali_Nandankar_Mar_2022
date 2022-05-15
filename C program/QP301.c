#include<stdio.h>
#include<conio.h>

void main()
{
	char i,j;
	
	for(i=65;j<=67;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
}
