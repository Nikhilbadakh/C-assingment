/*Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
 ******/


#include<stdio.h>

int main ()

{
	char c;
	int num1;
	printf("\n enter the character : ");

	scanf("%c",&c);

	printf("\n enter the number times print :");

	scanf("%d",&num1);
int i=num1;

	while ( i>0 , i--)
		

			printf("%c",c);
}
