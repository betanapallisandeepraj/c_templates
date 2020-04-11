#include<stdio.h>
int main(int argc,char *argv[])
{
	printf("size of data types in bypes as below,\n");
	printf("%-25s=%02lu bytes\n","short int",sizeof(short int));
	printf("%-25s=%02lu bytes\n","unsigned short int",sizeof(unsigned short int));
	printf("%-25s=%02lu bytes\n","unsigned int",sizeof(unsigned int));
	printf("%-25s=%02lu bytes\n","int",sizeof(int));
	printf("%-25s=%02lu bytes\n","long int",sizeof(long int));
	printf("%-25s=%02lu bytes\n","unsigned long int",sizeof(unsigned long int));
	printf("%-25s=%02lu bytes\n","long long int",sizeof(long long int));
	printf("%-25s=%02lu bytes\n","unsigned long long int",sizeof(unsigned long long int));
	printf("%-25s=%02lu bytes\n","signed char",sizeof(signed char));
	printf("%-25s=%02lu bytes\n","unsigned char",sizeof(unsigned char));
	printf("%-25s=%02lu bytes\n","float",sizeof(float));
	printf("%-25s=%02lu bytes\n","double",sizeof(double));
	printf("%-25s=%02lu bytes\n","long double",sizeof(long double));
	return 0;
}
/*
short int	2	-32,768 to 32,767	%hd
unsigned short int	2	0 to 65,535	%hu
unsigned int	4	0 to 4,294,967,295	%u
int	4	-2,147,483,648 to 2,147,483,647	%d
long int	8	-2,147,483,648 to 2,147,483,647	%ld
unsigned long int	8	0 to 4,294,967,295	%lu
long long int	8	-(2^63) to (2^63)-1	%lld
unsigned long long int	8	0 to 18,446,744,073,709,551,615	%llu
signed char	1	-128 to 127	%c
unsigned char	1	0 to 255	%c
float	4		%f
double	8		%lf
long double	16		%Lf
*/
