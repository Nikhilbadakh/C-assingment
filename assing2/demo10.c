/*Write a program to accept a character c and display category of the input character.
ALPHABET: c is a letter (65 to 90 or 97 to 122)
UPPERCASE: c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT: c is a digit (48 to 57)
SPACE: c is a space(32), tab(9), carriage return(13), new line(10)
OTHER: Not listed above */


#include<stdio.h>
 int main()
{

	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(ch >= 65 && ch <= 90)
		printf("Upper Case Letter category ");
	else if(ch >= 97 && ch <= 122)
		printf("Lower Case letter category");
	else if(ch >= 48 && ch <= 57)
		printf("Number category");
	else
		printf("Symbol");
	return 0;
}
