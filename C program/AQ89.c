#include<stdio.h>
#include<conio.h>

   
//Count the number of two 5's next to each other in an array of integer also count the situation where the second 5 is actually 6
void main()
{
	int i,a[5],n=0;
	printf("Enter Any Five Numbers\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter number ");
		scanf("%d",&a[i]);
		
	}
	int count = 0;
    for (i = 0; i <5; i++)
    {
        if (a[i] == 5 && (a[i + 1] == 5 || a[i + 1] == 6)) 
		{
		count=count+1;
		}
    }
    
    printf("%d", count);
	
}

