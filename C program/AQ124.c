#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,s=0,j=0;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the  element of array  \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]==5) 
        {
            s=s+1;
        }
        else 
		if(a[i]==3)
        {
            j=j+1;
        }
    }
    printf("\n");
    if(j>s)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}
