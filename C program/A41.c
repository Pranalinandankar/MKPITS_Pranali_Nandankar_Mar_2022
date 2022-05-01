#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	float sum=0;
	for (i=1;i<=50;i++)
	{
		if(i==1)
		{
			printf("1+");
		}
		else
		if(i==50)
		{
			printf("(1/%d)\n\n",i);
		}
		else
		{
			printf("(1/%d)+",i);
		}
		sum=sum+(1.0/i);
	}
	printf("Sum of the series is = %f\n",sum);
}
