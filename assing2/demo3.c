//Write a program to accept number and check whether the number is +ve, -ve and zero.

#include<stdio.h>

int main()

{
int a;
printf("\n enter the number to check no is +ve ,-ve or zero\n");
scanf("%d",&a);
 if(a>0)
 printf("\n the given no.%d is a possiive");

 else if(a<0)
 printf("\nthe given no.%d is negative");

 else if(a==0)
 printf("\n the given no . %d is zero");


return 0;
}
