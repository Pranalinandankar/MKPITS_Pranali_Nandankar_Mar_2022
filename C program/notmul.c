#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,mul;
    printf("Enter n1:");
    scanf("%d",&n1);
    printf("Enter n2:");
    scanf("%d",&n2);
    
    if(n1>n2)
    {
    	int temp;
    	temp=n1;
    	n1=n2;
    	n2=temp;
	}
	if(( n2% n1)==0)
	{
		printf("multiplied!\n");
	}
	else
	{
		printf("not multiplied!\n");
	}
}
