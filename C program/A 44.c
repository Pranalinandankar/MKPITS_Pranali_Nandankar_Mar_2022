#include<stdio.h>
#include<conio.h>

void main()
{
	int n[6],i,x;
    printf("Enter the 6 number of the array:\n");
    for(i=0;i<6;i++)
    {
    	scanf("%d",&x);
    	if(x>0)
    	{
    		n[i]=x;
		}
		else
		{
			n[i]=100;
		}
	}
	printf("Array value are :\n");
	for(i=0;i<6;i++)
	{
		printf("n[%d]=%d\n",i,n[i]);
	}
}
