#include<stdio.h>
#include<conio.h>

struct stud
{
	int id;
	char name[20];
};

void main()
{
	struct stud s1={40,"Pranu"};//structure constant
	
	printf("stud id=%d\n",s1.id);
	printf("stud name=%s\n",s1.name);
}
