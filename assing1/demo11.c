/*write a program to determine the ranges of char, short, int, and log variables, both signed and
unsigned, by printing appropriate values from standard headers.
Do not use spaces to align table columns.
(note: the size and range changes from compiler to compiler)
*/
#include<stdio.h>
#include<float.h>
#include<limits.h>

int main()

{
  printf("\n--------------------------------------------------------------------------------\n");
  printf("Data types              fs     size   range           \n");
  printf("----------------------------------------------------------------------------------\n");
  printf("char                \t%%c     \t%d  \t%dto%d    \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
  printf(" unsinged chr       \t%%c     \t%d  \t%dto%d    \n",sizeof(unsigned char),UCHAR_MAX );
  printf(" shortint           \t%%hd    \t%d  \t%dto%d    \n",sizeof(short int),SHRT_MIN,SHRT_MAX);
  printf(" unsigned short int \t%%hu    \t%d  \t%dto%d    \n",sizeof(unsigned short int),USHRT_MAX );
  printf(" int                \t%%d     \t%d  \t%dto%d    \n",sizeof(int),INT_MIN,INT_MAX);
  printf(" unsigned int       \t%%u     \t%d  \t%dto%d    \n",sizeof(unsigned int),UINT_MAX);
  printf(" long int           \t%%ld    \t%d  \t%dto%d    \n",sizeof(long int),LONG_MIN,LONG_MAX );
  printf("unsigned long int   \t%%uld   \t%d  \t%dto%d    \n",sizeof(unsigned long int),ULONG_MAX);
  printf("float               \t%%f     \t%f  %fto%f    \n",sizeof(float),FLT_MIN,FLT_MAX);
   


return 0;
}
