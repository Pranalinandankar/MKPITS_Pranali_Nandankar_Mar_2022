#include<stdio.h>
#include<conio.h>

void main()
{
	int p,q,r,s;
	printf("Enter integer p:");
	scanf("%d",&p);
	printf("Enter integer q:");
	scanf("%d",&q);
	printf("Enter integer r:");
	scanf("%d",&r);
	printf("Enter integer s:");
	scanf("%d",&s);
	
	if((q>r)&&(s>p)&&((r+s)>(p+q))&&(r>0)&&(s>0)&&(p%2==0))
	{
		printf("\n correct value");
	}
	else
	{
		printf("\n Worng Value");
	}
}
