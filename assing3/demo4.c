/*Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120*/

#include<stdio.h>

int main ()

{
int num ,i, f;
f=i=1;
printf("\n Enter the number :");
scanf("%d",&num);

while(i<=num){
f*=i;
i++;
}
printf("the factorial of %d is : %d",num,f);

return 0;
}
