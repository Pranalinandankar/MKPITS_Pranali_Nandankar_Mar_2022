#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[9],ecount=0,ocount=0;
	printf("Enter any 10 integers:\n");
	
	
	for(i=0;i<=9;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
    }
	for(i=0;i<=9;i++)
	{
	
	if(a[i]%2==0)
	{
	
	ecount=ecount+1;
    }
    else
    {
	ocount=ocount+1;
    }
}
printf("even count is = %d \n",ecount);
printf("odd count is =%d\n",ocount);
}
