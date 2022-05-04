#include<stdio.h>
#include<conio.h>
int main()
{
	int n,n2;
	float n1;
	printf("n    2 to power n    2 to power -n");
	n=1;
	for(n2=0;n2<=10;++n2)
	{
		if(n2==0)
		{
			n=1;
		}
		else
		{
			n=n*2;
			n1=1.0/n;
		}
		printf("\n %d      %d           %f",n2,n,n1);
	}
	
}
