#include<stdio.h>
#include<conio.h>

void main ()
{
	int x;
	float y;
	printf("Input total distance in km:");
	scanf("%d",&x);
	printf("Input total speed fuel spent in liter:");
	scanf("%f",&y);
	printf("Average consumption (km/It) %.3f",x/y);
	printf("\n");
}
