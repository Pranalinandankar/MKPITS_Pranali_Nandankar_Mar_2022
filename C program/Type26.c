#include<stdio.h>
#include<conio.h>

void str(int i)
{
	int r;
	printf("%d",r);
}
void fun1()
{
	int i;
	char name[10];
	printf("Enter any name:");
	scanf("%s",name);
	for (i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
	}
}
void main()
{
	fun1();
}
