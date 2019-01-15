#include <stdio.h>
#include <limits.h>

int main()
{
   printf("char 存储大小 : %lu \n", sizeof(char));
   printf("unsigned char 存储大小 : %lu \n", sizeof(unsigned char));
   printf("signed char 存储大小 : %lu \n", sizeof(signed char));
   printf("short 存储大小 : %lu \n", sizeof(short));
   printf("unsigned short 存储大小 : %lu \n", sizeof(unsigned short));
   printf("int 存储大小 : %lu \n", sizeof(int));
   printf("unsigned int 存储大小 : %lu \n", sizeof(unsigned int));
   printf("long 存储大小 : %lu \n", sizeof(long));
   printf("unsigned long 存储大小 : %lu \n", sizeof(unsigned long));
   printf("double 存储大小 : %lu \n", sizeof(double));
   printf("long int 存储大小 : %lu \n", sizeof(long int));
   printf("long long 存储大小 : %lu \n", sizeof(long long));
   printf("long double 存储大小 : %lu \n", sizeof(long double));

   return 0;
}
