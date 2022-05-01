#include<stdio.h>
#include<conio.h>

void mul(int x, int y,int z)
{
	int r;
	r=x*y*z;
	printf("%d",r);
}
void fun()
{
	int a=2,b=3,c=5;
	mul(a,b,c);
}
void main()
{
	fun();
}
