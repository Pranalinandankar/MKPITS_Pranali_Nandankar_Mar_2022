#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,n1=0,n2=0;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the  element of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i] == 5 && !n1) 
        {
            n2=n2+1;
            n1=1;
        }
        else
        {
            n1=0;
        }
    }
    
    if(n2==5)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}
