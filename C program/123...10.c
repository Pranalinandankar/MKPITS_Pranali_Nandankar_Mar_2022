#include<stdio.h>
#include<conio.h>

void main()
{
	int c,r;
	int n=1;
	
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",n++);
		}
		printf("\n");
	}
}
