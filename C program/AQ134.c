#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,s,n1[20],n2[20];
	printf("enter the size  of an array ");
	scanf("%d",&s);
	n=s-1;
	printf("enter the  element of array \n");
	for(i=0;i<=n;i++)
	{
		printf("n1[%d]= ",i);
		scanf("%d",&n1[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(i==s-1)
		{
			n2[i]=n1[0];
		}
		else
		{
			n2[i]=n1[i+1];
		}
	}
	printf("\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",n2[i]);
	}
}
