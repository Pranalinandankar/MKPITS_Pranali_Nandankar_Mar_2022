#include<stdio.h>
#include<conio.h>
int a,b,res=1,n[5];//global decleration
int fun();
int main()
{
	int n[5],i,j,fact=1;
	
	for(i=0;i<=4;i++)
	{
		printf("n[%d]=",i);
		scanf("%d",&n[i]);
		
	}
	for(i=0;i<=4;i++)
	{
		for(j=n[i];j>=1;j--){
			fact=fact*j;
		}
		printf(" factorial of %d =%d\n",n[i],fact);
		fact=1;
	}
	
}
int fun()
{
	printf("Enter the value:");
	for(a=0;a<=4;a++)
	{
		return 0;
	}
	for(a=0;a<=4;a++)
	{
		for(b=n[a];b>=1;b--)
		{
			res=res*b;
		}
		return 1;
	}
}
