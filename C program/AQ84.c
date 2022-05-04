#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,r1,r2;
	printf(" Enter the 1st Number:");
	scanf("%d",&n1);
	printf(" Enter the 2nd Number:");
	scanf("%d",&n2);
	
	r1=100-n1;
	r2=100-n2;

	if(r1<r2)
	{
		printf("%d is nearest to 100 ",n1);
	}
	else
	if(r2<r1)
	{
		printf("%d is nearest to 100 ",n2);
	}
	else
	{
		printf("The number is not nearest to 100 ");
	}

}
