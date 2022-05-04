#include<stdio.h>
#include<conio.h>
void main()
{
	int n,n1;
	printf("Enter the negative number  ");
	scanf("%d",&n);
	if(n<0)
	{
		n1=n*(-1);
		printf("After removing negative sign number becomes %d",n1);
	}
}

