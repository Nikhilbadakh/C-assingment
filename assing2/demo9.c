/*write a program to display number of days in the given month and year using
  a. Using If else ladder.
  b. Using logical operators.*/

#include<stdio.h>

int main ()

{

	int  m,y,jan,feb,mar,apr,may,june,jul,oug,sup,oct,nov,dec;
	
	printf("\n Enter a month  for display days in this month:");
	scanf("%d",&m);
	printf("\n enter year for display days in this year:" );
	scanf("%d",&y);
    
	if(m==1||m==3||m==5|| m==7 ||m==8 ||m==10|| m==12)
	{
     
	printf("\n the days in enter month=31");
	}
	else if	(m==4||m==6||m==9||m==11)
	{
	printf("\n the days in this month=30");
    }
    else if (m == 2)
	{ 
        printf("28/29 Days."); 
    }

	 if (y%4==0&&y%400==0) 
     {
	printf("\n the days in the enter years =366");
	}
    else 
	printf("\n the days in enter years=365");
return 0 ;
}
