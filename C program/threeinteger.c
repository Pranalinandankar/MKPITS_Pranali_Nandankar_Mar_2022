#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z,result,max;
	printf("Enter x:");
	scanf("%d",&x);
	printf("Enter y:");
	scanf("%d",&y);
	printf("Enter z:");
	scanf("%d",&z);
	result=(x+y+abs(x-y))/2;
	max=(result+z+abs(result-z))/2;
	printf("\nmaximum value of three integers:%d",max);
	printf("\n");
}
