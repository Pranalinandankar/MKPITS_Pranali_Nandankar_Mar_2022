#include<stdio.h>
#include<conio.h>

struct stud
{
	int id;
	char name[20];
};

void main()
{
	struct stud s1;
	printf("Enter stud id:");
	scanf("%d",&s1.id);
	
	printf("Enter stud name:");
	scanf("%s",s1.name);
	
	printf("stud id=%d\n",s1.id);
	printf("stud name=%s\n",s1.name);
}
