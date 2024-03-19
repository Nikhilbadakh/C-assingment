/*Write a program to accept Employee Id , Department No, Designation from user and display
  output with reference to following tables
  DeptNoDept NameDsgnCodeDesignation*/

#include<stdio.h>

int main()

{
	int  dept,id;
	char dsgn;
	printf("enter the employe id:(101,102,103,104)");
	scanf("%d",&id);
//	printf("Enter Dept No :(10,20,30,40)");
//	scanf ("%d",&dept);
	printf("Enter Designation code('M','S','s','C')");
	scanf("%c",&dsgn);

	switch (dsgn)
	{
		case'M':
			
			printf("the employee id is 101 is working in marketing Department as manager");
			break;

		case'S':
		
		printf("\n the employee id is 102 is working in Management as supervisor ");
			break;

		case's':
		
		printf("\n the employee id is 103 is working in sale as security officer ");
		
	break;  

		case'C':
		
		printf("\n the employee id is 104 is working in Designing as clerk ");
			break;
	//   default :
	  //      printf("invalid employee id!!!!");
			}

	return 0;
}
