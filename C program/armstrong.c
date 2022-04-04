#include<stdio.h>
#include<conio.h>

void main()
{
	int num,n1,n2,n3,res,res1,res2,res3,arm;
	printf("Enter 3 digit number:");
	scanf("%d",&num);
	n1=num%10;
	num=num/10;
	
	n2=num%10;
	num=num/10;
	
	n3=num%10;
	
	res1=n1*n1*n1;
	res2=n2*n2*n2;
	res3=n3*n3*n3;
	arm=res1+res2+res3;
	if(num==arm)
	{
		printf("%d is armstrong number",num);

	}
    else
    {
    	printf("%d is not armstrong number",num);
    
	}
	

}
