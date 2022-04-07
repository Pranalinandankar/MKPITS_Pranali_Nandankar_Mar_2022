#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,x1,y1,x2,y2,distance;
	printf("Enter (x,y):");
	scanf("%d%d",&x1,&y1);
	printf("Enter (x1,y1):");
	scanf("%d%d",&x2,&y2);
	x=x1-y1;
	y=x2-y2;
	distance=sqrt(x1*x2+y1*y2);
    printf("distance between=%d",distance);
}
