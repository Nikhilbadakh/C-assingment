/*Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message*/

#include<stdio.h>

int main()
{
int a,b;
float c;
printf("\n enter the a=\n");
scanf("%d",&a);
printf("\n enter the value of b=\n");
scanf("%d",&b);
if(b==0||a==0)
printf("Appropriate error");
else
{
c=a/b;
printf("%f",c);
}
return 0;
}
