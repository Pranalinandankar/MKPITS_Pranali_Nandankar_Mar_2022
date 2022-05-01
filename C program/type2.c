#include<stdio.h>
#include<conio.h>
void add(int x,int y)
{
	int r;
	r=x+y;
	printf("%d",r);
}
void fun1()
{
	int a=2,b=3;
	add(a,b);
}
void main()
{
	fun1();
}
