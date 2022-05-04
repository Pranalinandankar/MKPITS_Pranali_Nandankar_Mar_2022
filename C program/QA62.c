#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	printf("Capital letter set in Decimal \n");
	for(c=65;c<=90;c++)
	{
		printf("%c %d \n",c,c);
	}
   printf("Small letter set in Decimal  \n");
   for(c=97;c<=122;c++)
   {
   	printf("%c  %d \n ",c,c);
   }
}
