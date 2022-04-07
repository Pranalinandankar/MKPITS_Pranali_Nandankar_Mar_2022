#include<stdio.h>
#include<conio.h>
void main()
{
	int num,n1,n2,n3,n4,n5,ores=0,eres=0;
	printf("Enter the five digit number");
	scanf("%d",&num);
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	num=num/10;
	n4=num%10;
	num=num/10;
	n5=num%10;
	
	if(n1%2==0)
	{
	eres=eres+n1;
	}
	else
	{
	ores=ores+n1;
	}
  	if(n2%2==0)
	{
	eres=eres+n2;
	}
	else
	{
	ores=ores+n2;
	}
	if(n3%2==0)
	{
	eres=eres+n3;
	}
	else
	{
	ores=ores+n3;
	}
	if(n4%2==0)
	{
	eres=eres+n4;
	}
	else
	{
	ores=ores+n4;
	}
	if(n5%2==0)
	{
	eres=eres+n5;
	}
	else
	{
	ores=ores+n5;
	}


printf("The sum of even %d \n",eres);
printf("The sum of odd %d",ores);

	
}

