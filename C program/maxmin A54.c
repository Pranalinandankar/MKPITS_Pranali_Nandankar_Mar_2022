#include<stdio.h>
#include<conio.h>

void main()
{
	float a1,a2,a3,a4;
	float max,min;
	printf("Input four number:\n");
	scanf("%f%f%f%f",&a1,&a2,&a3,&a4);
	
	if(a1>=a2 && a1>=a3 && a1>=a4)
	{
		max=a1;
	}
	else
	if(a2>=a1 && a2>=a3 && a2>=a4)
	{
		max=a2;
	}
	else
	if(a3>=a1 && a3>=a2 && a3>=a4)
	{
		max=a3;
	}
	else
	if(a4>=a1 && a4>=a2 && a4>=a3)
	{
		max=a4;
	}
	if(a1<=a2 && a1<=a3 && a1<=a4)
	{
		min=a1;
	}
	else
	if(a2<=a1 && a2<=a3 && a2<=a4)
	{
		min=a2;
	}
	else
	if(a3<=a1 && a3<=a2 && a3<=a4)
	{
		min=a3;
	}
	else
	if(a4<=a1 && a4<=a2 && a4<=a3)
	{
		min=a4;
	}
	printf("Difference is %0.41f\n",max-min);
	
	
}
