#include<stdio.h>
#include<conio.h>
void fun1(int num,int n);
void for(int r)
{
	int r;
	if(r%2==0)
	{
		printf("%d",r);
	}
}
void fun1()
{
	int num,n;
 	printf("Enter Even number between to 50(inclusive):\n");
 	for(num=1; num<=50; num++)

	if(num%2==0)
 	{
 		printf("%d",num);
	 }

}
void main()
{
	fun1();
}
