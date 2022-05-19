#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,l,j=1;
    printf("Enter the size of an  array ");
    scanf("%d",&n);
    printf("Enter the length  ");
    scanf("%d",&l);
    int a[n];
    printf("Enter the element of array \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (i = 0; i < l; i++)
    {
       if (a[i] != a[n - l + i]) 
        {
            j=0;
        }
    }
    
    if(j==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}
