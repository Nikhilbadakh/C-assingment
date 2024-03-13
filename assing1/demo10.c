#include<stdio.h>
#include<math.h>

int main()


/*Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.
Perimeter = a + b + c␎ ␏ ␐ ␏ ␑
Area = ␒␓ ␆ ␇␓ ␎ ␆ ␇␓ ␐ ␆ ␇␓ ␑
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results.*/

{
float perimeter,area;
float a,b,c,s;
printf("\n enter the value for calculat perimeter and area a,b,c");

scanf("%f%f%f",&a,&b,&c);
perimeter=a+b+(c*a)+b+c;
printf("\n the perimeter is =%f",perimeter );

s= perimeter/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n the area is =%f",area); 



return 0;
}
