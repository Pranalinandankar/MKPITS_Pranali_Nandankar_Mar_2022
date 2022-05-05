#include<stdio.h>
#include<conio.h>
int fun(int c,int d);
int main()
{
int a,b,s;
printf("Enter two number:");
scanf("%d%d",&a,&b);
s=fun(a,b);
if(s==0)
{
	printf("%d is smaller",a);
}
else
{
	printf("%d is smaller",b);
}
}

int fun(int c, int d)
{
	if(c<d)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

