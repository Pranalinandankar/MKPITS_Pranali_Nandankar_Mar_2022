#include<stdio.h>
#include<conio.h>

void main()
{

	int force,accel,mass;
	printf("Enter mass:");
	scanf("%d",&mass);
	printf("Enter accel:");
	scanf("%d",&accel);
	force=mass*accel;
	printf("force is=%d",force);
}
