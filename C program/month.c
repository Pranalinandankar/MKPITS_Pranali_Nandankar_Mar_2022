#include<stdio.h>
#include<conio.h>

void main()
{
	int mon;
	printf("Enter any integer between range of (1to12):");
	scanf("%d",&mon);
    switch(mon)
    {
    	case 1:
    		printf("january\n");break;
    	case 2:
		printf("February\n");break;
		case 3:
    		printf("March\n");break;
    	case 4:
		printf("April\n");	break;
		case 5:
    		printf("May\n");break;
    	case 6:
		printf("june\n");break;
		case 7:
    		printf("july\n");break;
    	case 8:
		printf("August\n");break;
		case 9:
    		printf("September\n");break;
    	case 10:
		printf("Octomber\n");break;
		case 11:
    		printf("November\n");break;
    	case 12:
		printf("December\n");break;
		default : printf("invalid number.");
	}
}
