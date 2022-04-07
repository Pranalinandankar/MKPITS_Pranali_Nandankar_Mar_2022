#include<stdio.h>
#include<conio.h>

int main()
{
	float w1,w2,t1,t2;
	float avg;
	printf("weight-item1:");
	scanf("%f",&w1);
	printf("weight-item2:");
	scanf("%f",&w2);
	printf("\n no. of iteam1 purchases:");
	scanf("%f",&t1);
	printf("\n no. of iteam2 purchases:");
	scanf("%f",&t2);
	avg=((w1*t1)+(w2*t2))/(t1+t2);
	printf("Average is =%f",avg);
}
