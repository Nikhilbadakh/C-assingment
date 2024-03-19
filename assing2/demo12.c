//Write a program to display number of days in the given month and year using switch case
//statement.


#include<stdio.h>

int main ()
{
	int month;
	int days;
    int year;

	printf("\n enter month  for display days : ");
	scanf("%d",&month);
    printf("\n enter the year for display days ;");
	scanf("%d",&year);

	
	
	
	 if( year%4==0 && year%400==0 && year%100!=0)

	 
	 printf("\n the given years days = 366");


	 else
	 printf("\n the given years days = 365");
	 
	 
	 
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days=31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days=30;
			break;

		case 2:
			days=28;
			break;

		default:
			days=0;
			break;

	}
	if (days)
		printf("\n no. of days in %d month is:%d\n",month,days);
	else
		printf("invalid month!!!!\n");
	return 0;



return 0;
}
