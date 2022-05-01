#include<stdio.h>
#include<conio.h>
void main()
{
	even();
}

void even()
{
	int num,n;
 	printf("Enter Even number between to 50(inclusive):\n");
	for(num=1; num<=50; num++)

 	if(num%2==0)
 	{
 		printf("%d\n",num);
	 }
}
