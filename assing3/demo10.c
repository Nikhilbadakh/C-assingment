//Write a program to accept integer values of base and index and calculate power of base 

#include<stdio.h>

int main()
{

	int base, exp;

	long double result=1.0;

	printf("enter a base no:");
	scanf("%d",&base);

	printf("enter an exponent:");

	scanf("%d",&exp);

	while (exp != 0){

		result*=base;
		--exp;
	}
	printf("Ans: %.0Lf",result);

	return 0;
}
