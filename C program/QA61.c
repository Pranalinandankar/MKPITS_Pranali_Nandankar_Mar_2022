#include<conio.h>
#include<stdio.h>
int main()
{
	int n,n1,n2;
	n=0;
	do
	{
		n1=0,n2=1;
		printf("%2d  ",n);
		while(n1<=n)
		{
			if(n==0 || n1==0)
			printf("%4d ",n2);
			else
			{
				n2=n2*(n-n1+1)/n1;
				printf("%4d ",n2);
			}
			n1=n1+1;
		}	
			printf("\n");
			n=n+1;
	}
	while(n<=10);
}
