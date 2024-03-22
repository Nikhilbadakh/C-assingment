//Write a program to print table of given number.

#include<stdio.h>

int main()

{
int num1;

printf("Enter the number for print the table :");
scanf("%d",&num1);

for (int i=1 ; i<=10; ++i)
{
printf("%d*%d =%d\n ",num1,i,num1 * i);

}
return 0;
}
