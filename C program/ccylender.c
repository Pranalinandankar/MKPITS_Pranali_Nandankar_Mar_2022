#include<stdio.h>
#include<conio.h>
void main()
{
	float pi=3.142,h;
	int cc,radius;
	printf("Enter radius:");
	scanf("%d",&radius);
	printf("Enter h:");
	scanf("%f",&h);
	cc=pi*radius*radius*h;
	printf("c cylender is=%d",cc);
}
