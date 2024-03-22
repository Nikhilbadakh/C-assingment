/*Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
  then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153*/

#include<stdio.h>

int main()
{
	int num, ori , rem , result =0;
	printf("enter the three integer: ");

	scanf("%d",&num);
	ori=num;

	while (ori!=0){
		rem = ori %10;

		result+=rem*rem*rem;

		ori /=10;
	}

	if (result == num)

		printf("%dis a armstrong no.",num);
	else
		printf("%d is an armstrong no.",num);
	return 0;
}



