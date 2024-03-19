/*Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. using logical operators*/

# include<stdio.h>

int main()

{
int y;
   printf("\n Enter the year for check it is leap year or not=");

   scanf("%d",&y);

if (y %4 == 0 &&y %400==0)
   printf("\n the given years is leap year and days of these years=366");
   
else (y % 100 != 0);
   printf("\n the given years is non leap year and days of these years=365");
   
  
return 0;
}
