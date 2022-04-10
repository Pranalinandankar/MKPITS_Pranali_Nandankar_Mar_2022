#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,n3,n4,n5,sum=0,nega=0,total;
	float average;
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
		sum=sum+1;
		total+=n1;
		
	}
	else
	{
		nega=nega+1;
	}
	if(n2>=0)
	{
		sum=sum+1;
		total+=n2;
	}
	else
	{
		nega=nega+1;
	}
	if(n3>=0)
	{
		sum=sum+1;
		total+=n3;
	}
	else
	{
		nega=nega+1;
	}
	if(n4>=0)
	{
		sum=sum+1;
		total+=n3;
	}
	else
	{
		nega=nega+1;
	}
	if(n5>=0)
	{
		sum=sum+1;
		total+=n5;
	}
	else
	{
		nega=nega+1;
	}
	
     printf("count of all positive no. %d\n",sum);
     average=total/sum;
     printf("Average is= %f\n",average);

}
