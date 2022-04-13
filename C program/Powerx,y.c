#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,i,pow=1;
	
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	
	i=1;
	
	while(i<=y)
	{
		pow=pow*x;
		i++;
	}
	printf("%d",pow);
}
