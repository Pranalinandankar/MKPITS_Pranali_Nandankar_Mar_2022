#include<stdio.h>
#include<conio.h>
void main()
{
	int a,x=0,y;
	printf("Input a positive number less than 500:");
	scanf("%d",&a);
	y=a;
	if(y<1 || y>999)
	{
		printf("The given nuber is out of range\n");
		
	}
	else
	{
		x+=y%10;
		y/=10;
		x+=y%10;
		y/=10;
		x+=y%10;
		printf("sum of the digits of %d is %d \n",a,x);
	}
}
