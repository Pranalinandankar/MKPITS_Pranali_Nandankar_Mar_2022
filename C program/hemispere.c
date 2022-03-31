#include<stdio.h>
#include<conio.h>
void main()
{
	float pi=3.14;
	int radius,hemi;
	printf("Enter radius:");
	scanf("%d",&radius);
	hemi=3*pi*radius*radius;
	printf("hemispere is=%d",hemi);
}
