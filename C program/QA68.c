#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,c;
	printf("Number   Square   Cube :\n");

    for(n=0; n<=20; n++)
    {
	  
    s=n*n;
	c=n*n*n;
    printf("%d\t%d\t%d\n",n,s,c);
    }
}
