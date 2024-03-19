/*Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).*/


#include<stdio.h>

int main()
{

 int num, reverse = 0, rem, temp;
    
    printf("\n enter the  The number: ");
	scanf ("%d",&num);
 
    temp = num;
    
   // loop to find reverse number
    while(temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    };
    
    // palindrome if num and reverse are equal
    if (num == reverse)
        printf("%d is Palindrome\n", num);
    else
        printf("%d is Not Palindrome\n", num);







return 0;
}
