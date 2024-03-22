/*check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome*/
#include<stdio.h>
int main() {
  int n, rev = 0, rem, ori;
    printf("Enter an integer: ");
    scanf("%d", &n);
    ori = n;

       while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

       if (ori == rev)
        printf("%d is a palindrome.", ori);
    else
        printf("%d is not a palindrome.", ori);

    return 0;
}
