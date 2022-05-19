#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,len,a[10];
	printf("Enter the  size of array ");
	scanf("%d",&len);
	printf("Enter the element of array \n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		if(a[i]==5)
		{
			n=i;
			break;
		}	
	}
	printf("\n");
	printf("New array ");
    for(i=n+1;i<len;i++)
    {
    	printf(" %d ",a[i]);
	}
}

