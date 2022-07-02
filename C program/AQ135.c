#include<stdio.h>
#include<conio.h>
int main()
{
	int i,len,a[10];
	printf("Enter the size of an array ");
	scanf("%d",&len);
	printf("Enter the elements of array \n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("New array is  ");
	for(i=0;i<len;i++)
	{
		if(a[i]==5)
		{
			break;
		}
		printf( " %d ",a[i]);
	}

}
