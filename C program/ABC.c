#include<stdio.h>
#include<conio.h>

void main()
{
	char r,c;
	char n;
	printf("Enter the no of lines:");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
	{
		printf("%c",(c+64));
	}
	printf("\n");
	}
}
