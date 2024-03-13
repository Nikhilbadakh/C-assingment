#include<stdio.h>

int main()
{
int a, b,c;
printf("Enter two no:\n");
scanf("%d%d",&a,&b);

c=a+b;
printf("addition=%d",c);

c=a-b;

printf("\nsub=%d",c);

c=a*b;
printf("\n mul=%d",c);

c=a/b;
printf("\n div=%d",c);

return 0;
}
