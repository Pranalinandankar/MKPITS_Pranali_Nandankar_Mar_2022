#include<stdio.h>
#include<conio.h>
int main()
{
	int choice;
	printf("Enter 1 or 2 or 3\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
		printf("in case 1\n");
		break;
		case 2:
		printf("in case 2\n");
		case 3:
	    break;
	    printf("in case 3\n");
	    break;
		default:
		printf("i am in default");
	}
	return 0;
}
