#include<stdio.h>

int main ()

{
int num1,r;

printf("\n Enter number for table:");

scanf("%d",&num1);
 
 for(int i=1;i<=10;i++)

 {
r=num1*i;
  printf("\n %d",r);
 }

 
return 0;
}
