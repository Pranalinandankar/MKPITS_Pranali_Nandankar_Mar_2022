#include<stdio.h>
#include<conio.h>

struct stud
{
	int id;
	char name[20];
};

void main()
{
	struct stud s[5];
	int i;
	
	for(i=0;i<5;i++)
	{
	
	printf("Enter stud id:");
	scanf("%d",&s[i].id);
	
	printf("Enter stud name:");
	scanf("%s",s[i].name);
}
for(i=0;i<5;i++)
{
	printf("stud id=%d\n",s[i].id);
	printf("stud name=%s\n",s[i].name);
}
}
