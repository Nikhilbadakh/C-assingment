/*Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
b. Reverse the number
Input: 9362
Output: 2639
c. Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome
d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong n0.*/

#include <stdio.h>



int main(void)

{

    int num, sum = 0, rem;

    printf("Enter a number: ");

    scanf("%d", &num);

    while (num != 0)

    {

        rem = num % 10;

        sum = sum + rem;

        num = num / 10;

    }

    printf("Sum of digits of the number is %d", sum);

    return 0;

}
