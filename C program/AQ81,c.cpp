#include<stdio.h>
#include<conio.h>
int main() 
{
	int n;
	printf("Enter the  number :");
	scanf("%d",&n);
	
	if(100<=n && 200>=n)
	{
		printf("Number is in Range");
	}
	else
	{
		printf("Number is Not in Range ");
	}
}

