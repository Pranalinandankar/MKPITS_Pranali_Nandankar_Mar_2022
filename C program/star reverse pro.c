#include<stdio.h>
#include<conio.h>

void main()
{
	int r,str;
	for(r=4;r>=1;r--)
	{
		for(str=1;str<=r;str++)
		{
			printf("*");
		}
		printf("\n");
	}
}
