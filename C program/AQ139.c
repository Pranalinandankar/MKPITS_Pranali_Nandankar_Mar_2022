#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,t,j=0;
    printf("Enter the size of  an array ");
    scanf("%d",&n);
    int n1[n],n2[n];
    printf("Enter the array element : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&n1[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (n1[i] % 2 == 0)
        {
            t = n1[j];
            n1[j] = n1[i];
            n1[i] = t;
            j++;
        }
    }  
    printf("New Array is : \n");
    for (i=0;i<n;i++)
    {
    	printf("%d  \n",n1[i]);
	}
    
}
