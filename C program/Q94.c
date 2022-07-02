#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	 printf("Enter any number:");
	 scanf("%d",&n);
	 
	 if(n%3==0 && n%7==0)
	 {
	 	printf("Not Multiple 3 or 7");
	 }
	 else
	 if(n%3==0)
	 {
	 	printf("Multiple of 3");
	 }
	 else
	 if(n%7==0)
	 {
	 	printf("Multiple of 7");
	 }
	 else
	 {
	 	printf("Not Multiple of 3 or 7");
	 }
	 
}
