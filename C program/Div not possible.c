#include<stdio.h>
#include<conio.h>

int main()
{
	int n1,n2;
	float res;
	printf("Input two numbers:\n");
	printf("\nEnter n1:");
	scanf("%d",&n1);
	printf("Enter n2:");
	scanf("%d",&n2);
	
	
		if(n2!=0)
		{
			res=n1/n2;
			printf("%f\n",res);
		}
		else
		{
			printf("div is not possible\n");
		}
	 return 0;
}
