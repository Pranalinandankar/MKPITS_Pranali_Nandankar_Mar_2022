#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	printf("Enter the character\n");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("%c is capital letter\n",ch);
	}
	else
	if(ch>=97 && ch<=122)
	{
		printf("%c is digit\n",ch);
	}
	else
	if(ch>0 && ch<=57)
	{
		printf("%c is special symbol\n",ch);
	}
	else
	{
		printf("Invalid character\n");
	}
}
