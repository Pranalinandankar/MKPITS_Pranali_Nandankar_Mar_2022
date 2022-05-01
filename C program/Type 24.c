#include<stdio.h>
#include<conio.h>

void arm(int res )
{
	int r;
	printf("%d",res);
}

void fun()
{
		int i=001;
	int a,b,c,t,res;
	
	printf("All armstrong no. betn 1 to 1000:\n");
	
	while (i<=1000)
	{
		t=i;
		
		a=t%10;
		t=t/10;
		b=t%10;
		t=t/10;
		c=t%10;
		
		res=(a*a*a)+(b*b*b)+(c*c*c);
		
		if(i==res)
		{
			printf("%d\n",res);
		}
		i++;
	}
}
void main()
{
	fun();
}
