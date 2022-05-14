#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,n3;
	printf("Enter n1:");
	scanf("%d",&n1);
	printf("Enter n2:");
	scanf("%d",&n2);
    printf("Enter n3:");
	scanf("%d",&n1);
	
if(n1==n2+n3 || n2==n1+n3 || n3==n1+n2)
{
	printf("True");
}
else
{
	printf("False");
}
}
