/*Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.*/

#include<stdio.h>
int main()

{
int num1,num2,num3,max;

printf("\n Enter the three no. to find maximum = ");
printf("\n enter value of num1 =");
scanf("%d",&num1);
printf("\n Enter the value of num2 =");
scanf("%d",&num2);
printf("\n enter the value of num 3 =");
scanf("%d",&num3);

if(num1>num2&&num1>num3){
printf("\n the maximum = %d",num1);
}

 else if (num2>num3&&num2>num1){
printf("\n the maximum is =%d",num2);
}
else{ 
printf("\n the maximum is =%d",num3);
}


return 0;
}
