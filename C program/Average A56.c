#include<stdio.h>
#include<conio.h>

void main()
{
	int a, ctr=0, min_num, max_num, s=0;
	double avg;
	printf("Inpt a positive integer :");
	scanf("%d",&a);
	if(a<=0)
	{
		printf("No positive number integer :\n");
	}
	min_num=a;
	max_num=a;
	while(a>0)
	{
		s+=a;
		ctr++;
		max_num=a>max_num ? a : max_num;
		min_num=a>min_num ? a : min_num;
		printf("Inpuy next positive integer:\n");
		scanf("%d",&a);
	}
	avg = s/ (double) ctr;
	printf("Number of positive values entered is %d\n", ctr);
	printf("Maximun value entered is %d\n",max_num);
	printf("Minimum value entered is %d\n",min_num);
	printf("Average value is %0.41f\n",avg);
	
}
