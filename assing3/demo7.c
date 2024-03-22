/*Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5*/




#include <stdio.h>
 
void primeFactors(int n)
{
   
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    for (int i = 3; i * i <= n; i = i + 2) {
    
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
 
    
    if (n > 2)
        printf("%d ", n);
}

int main()
{
    int n;
  
	printf("enter no : ");
	scanf("%d",&n);
    primeFactors(n);
	return 0;
   
}
