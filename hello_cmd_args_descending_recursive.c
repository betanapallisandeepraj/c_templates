#include<stdio.h>
void print_recursive(int argc,char *argv[]);
int main(int argc,char *argv[])
{
	printf("Hello World\n");
	print_recursive(argc,argv);
	return 0;
}

void print_recursive(int argc,char *argv[])
{
	if(argc==0)
		return;
	print_recursive(argc-1,argv);
	printf("argument[%d]=%s\n",argc-1,argv[argc-1]);
}
