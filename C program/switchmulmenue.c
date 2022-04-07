#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	char choice;
	
	printf("prees + for add\n");
	printf("press - for sub\n");
	printf("prees * for mul\n");
	printf("press / for div\n");
	printf("Enter your choice\n");
	scanf("%c",&choice);
	switch (choice)
	
	
	{
		case '+':
			
    printf("Enter two num for add\n");
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	c=a+b;
	printf("add =%d\n",c);
    break;

	 case '-':
	printf("Enter two num for sub\n");
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	c=a-b;
	printf("sub =%d\n",c);
    break;
    
    case '*':
	printf("Enter two num for mul\n");
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
    break;
    
    case '/
	
	
	':
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
