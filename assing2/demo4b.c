/*Write a program to find maximum of two numbers using
conditional operator*/

#include<stdio.h>

int main()
{
int num1,num2,max;

printf("\n enter two numbers to find maximum of two numbers=");

scanf("%d%d",&num1,&num2);
max=((num1>num2)?num1:num2);
printf("\n the maximum is =%d",max);
return 0;
}
