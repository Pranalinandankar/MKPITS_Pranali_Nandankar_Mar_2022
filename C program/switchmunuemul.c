#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	char choice;
	
	printf("prees 1 for add\n");
	printf("press 2 for sub\n");
	printf("prees 3 for mul\n");
	printf("press 4 for div\n");
	printf("Enter your choice\n");
	scanf("%c",&choice);
	switch (choice)
	
	
	{
	case '1':
    printf("Enter two num for add\n");
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	c=a+b;
	printf("add =%d\n",c);
    break;

	case '2':
	printf("Enter two num for sub\n");
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	c=a-b;
	printf("sub =%d\n",c);
    break;
    
    case '3':
	printf("Enter two num for mul\n");
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
    break;
    
    case '4':
	printf("Enter two num for div\n");
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	c=a/b;
	printf("div =%d\n",c);
    break;
    
    default:
    	printf("choice is invalid\n");
	}
}
