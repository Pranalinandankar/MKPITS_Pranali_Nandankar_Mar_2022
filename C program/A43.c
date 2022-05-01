#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n;
	printf("Enter number (integer value):");
	scanf("%d",&n);
	printf("All positive divisors of %d \n",n);
	for(a=1; a<=n;a++)
	{
		if(n%a==0)
		{
			printf("%d\n",a);
		}
	}
}
