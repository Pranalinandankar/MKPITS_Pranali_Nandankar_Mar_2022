#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int n,i;
 	printf("Enter Size of Array :");
 	scanf("%d",&n);
 	
 	int a[n];
 	for(i=0;i<n;i++)
 	{
 		printf("Enter Array element:");
 		scanf("%d",&a[i]);
	 }
	 if(a[0]==a[n-1])
	 {
	 	printf("True!");
	 }
	 else
	 {
	 	printf("False!");
	 }
 }
