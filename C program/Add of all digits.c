#include<stdio.h>
#include<conio.h>
void main()
{
	int num,n1,add=0;
	printf("Enter n digits:");
	scanf("%d",&num);
	
	while(num>0)
	{
		n1=num%10;
		add=add+n1;
		num=num/10;
	}
	printf("%d",add);
}
