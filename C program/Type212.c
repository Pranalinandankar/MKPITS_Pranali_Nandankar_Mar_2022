#include<stdio.h>
#include<conio.h>

void loop()
{
	int j;
	printf("%d",j);
}
void fun()
{
	int i;
	i=1;
	do
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	while(i<=10);
}
void main()
{
	fun();
}
