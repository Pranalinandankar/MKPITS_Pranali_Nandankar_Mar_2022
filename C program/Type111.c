#include<stdio.h>
#include<conio.h>
void main()
{
	count();
}
void count()
{
	int n1,n2,n3,n4,n5,sum=0,nega=0;
	printf("Enter n1:");
	scanf("%d",&n1);
	printf("Enter n2:");
	scanf("%d",&n2);
	printf("Enter n3:");
	scanf("%d",&n3);
	printf("Enter n4:");
	scanf("%d",&n4);
	printf("Enter n5:");
	scanf("%d",&n5);
	
	if(n1>=0)
	{
		sum=sum+n1;
		
	}
	else
	{
		nega=nega+n1;
	}
	if(n2>=0)
	{
		sum=sum+n2;
	}
	else
	{
		nega=nega+n2;
	}
	if(n3>=0)
	{
		sum=sum+n3;
	}
	else
	{
		nega=nega+n3;
	}
	if(n4>=0)
	{
		sum=sum+n4;
	}
	else
	{
		nega=nega+n4;
	}
	if(n5>=0)
	{
		sum=sum+n5;
	}
	else
	{
		nega=nega+n5;
	}
	
     printf("count of all positive no. %d\n",sum);
     printf("count of all negative no. %d\n",nega);

}
