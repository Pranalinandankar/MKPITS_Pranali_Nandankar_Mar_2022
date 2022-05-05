#include<stdio.h>
#include<conio.h>
int a,b;//global decleration
int fun();
int main()
{
int s;
s=fun();
if(s==0)
{
	printf("%d is smaller",a);
}
else
{
	printf("%d is smaller",b);
}
}

int fun()
{
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

