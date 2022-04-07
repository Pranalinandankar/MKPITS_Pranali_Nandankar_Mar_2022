#include<stdio.h>
#include<conio.h>

void main()
{
	int ndays,y,m,d;
	printf("Input no. of days:");
	scanf("%d",&ndays);
	
	y=ndays/365;
	
	ndays=ndays-(365*y);
	
	m=ndays/30;
	
	d=ndays-(m*30);
	
	printf("%d year (s) \n %d month(s)\n %d day(s)",y,m,d);
	
}
