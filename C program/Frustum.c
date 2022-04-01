#include<stdio.h>
#include<conio.h>
void main()
{
	float pi=3.14;
	int f,l,R,r;
	printf("Enter l:");
	scanf("%d",&l);
	printf("Enter R:");
	scanf(" %d",&R);
	printf("Enter r:");
	scanf("%d",&r);
	f=pi*l*(R+r);
	printf("frustum is=%d",f);
}
