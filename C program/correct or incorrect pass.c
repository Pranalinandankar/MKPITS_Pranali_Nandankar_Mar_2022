#include<stdio.h>
#include<conio.h>

void main()
{
	int pass,i;
	i=1;
	
	while(i!=10)
	{
		printf("Enter correct password:\n");
		scanf("%d",&pass);
		
		if(pass==1234)
		{
			printf("Password is correct\n");
			scanf("%d",&i);
		}
		else
		{
			printf("Password is incorrect\n");
		}
		i++;
	}
}
