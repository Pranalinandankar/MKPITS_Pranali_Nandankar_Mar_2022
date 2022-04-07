#include<stdio.h>
#include<conio.h>

void main()
{
	int hour,min,s,sec;
	printf("Enter second:");
	scanf("%d",&sec);
	 hour=(sec/3600);
	 
	 min=(sec-(3600*hour))/60;
	 
	 s=(sec-(3600*hour)-(min*60));
	 
	 printf("H:M:S-%d:%d:%d\n",hour,min,s);
}
