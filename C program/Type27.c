#include<stdio.h>
#include<conio.h>

void dim()
{
	int a;
	printf("%d",a);
}
void fun()
{
	int m1[2][2],i,j;
	printf(" Enter 2x2 matrix\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m1[%d][%d]=",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf(" index of array\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			if(i==j){
			
			printf(" m1[%d][%d]= %d\n",i,j,m1[i][j]);
		}
		}
	}
}
void main()
{
	fun();
}
