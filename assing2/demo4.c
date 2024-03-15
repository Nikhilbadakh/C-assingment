/*Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.*/

#include<stdio.h>

int main ()
{
int a, b;


printf("\n enter the no. to find maximum of two no:");

scanf("%d%d",&a,&b);

if(a>b)
{
printf("\n  %d is maximum",a);
}
if(b>a){
printf("\n  b=%d is maximum",b);
}

return 0;
}

