#include<stdio.h>
#include<conio.h>
void main()
{
	int d1,d2,d,m1,m2,y1,y2,a=0;
	int day,x;
	
	printf("Enter from Date in (dd mm yyyy) format:");
	scanf("%d-%d-%d",&d1,&m1,&y1);
	printf("Enter To Date in (dd mm yyyy) format:");
	scanf("%d-%d-%d",&d2,&m2,&y2);
	
	if(d2<d1 || y2<y1 || m2<m1)
	{
		printf("The todate should br Greater than fromdate!");
	}
	else if(m2>m1)
	{
		if(m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12)
		{
			d=31;
		}
		else
		 if(m1==4 || m1==6 || m1==9 || m1==11)
		{
			d=30;
		}
		else
		{
			d=29;
		}
		int i=m1+1;
		while(i<m2)
		{
			if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			{
				a=a+31;
			}
			else 
			if(i==4 || i==6 ||i==9 || i==11)
			{
				a=a+29;
			}
			i=i+1;
		}
		day=d-d1;
		day=day+a;
		day=day+d2;
		x=day/7;
		x=x*2;
		day=day-x;
		printf("Total working days=%d",day);
	}
	else
	{
		day=d2-d1;
		x=day/7;
		x=x*2;
		day=day-x;
		printf("Total working days = %d",day);
	}
	
}
