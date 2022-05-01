#include<stdio.h>
#include<conio.h>

void fac()
{
	int n;
	printf("%d",n);
}
void fun()
{
	int a[5],i,j,fact=1;
	printf(" Enter the values\n");
	
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<=4;i++)
	{
		for(j=a[i];j>=1;j--){
			fact=fact*j;
		}
		printf(" factorial of %d =%d\n",a[i],fact);
		fact=1;
	}
	
}
void main()
{
	fun();
}
