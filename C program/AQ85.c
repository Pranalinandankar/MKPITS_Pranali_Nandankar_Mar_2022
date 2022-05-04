#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
    printf(" Enter the 1st Number:");
	scanf("%d",&n1);
	printf(" Enter the 2nd Number:");
	scanf("%d",&n2);
	
	if(n1>=40&&n1<=50&&n2>=40&&n2<=50 || n1>=50&&n1<=60&&n2>=50&&n2<=60)
	{
		printf(" True");
	} 
	else
	{
		printf(" False");
	}
}
