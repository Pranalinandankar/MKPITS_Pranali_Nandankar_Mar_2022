#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("Enter the size of array : \n");
	scanf("%d",&n);
	int n1[n],n2[3];
	
	for(i=0;i<n;i++)
	{
		printf("Enter the element : ");
		scanf("%d",&n1[i]);
	}	
	n2[0]=n1[2];
	n2[1]=n1[3];
	n2[2]=n1[4];
	for(i=0;i<3;i++)
	{
		printf("%d ",n2[i]);
	}
	
	
}
