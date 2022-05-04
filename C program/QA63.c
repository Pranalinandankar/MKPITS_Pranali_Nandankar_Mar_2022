#include<stdio.h>
#include<conio.h>
int main()
{
	char s1[30],s2[30];
	int i;
	printf("Enter the string   ");
	scanf("%s",s2);
	for(i=0;s2[i]!='\0';i++)
	
		s1[i]=s2[i];
		s1[i]='\0';
		printf("\n");
		printf("Original String is %s\n",s1);
		printf("Number of Characters is %d",i);
	
}

