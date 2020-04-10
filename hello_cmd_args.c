#include<stdio.h>
int main(int argc,char *argv[])
{
	printf("Hello World\n");
	while(argc>0) {
		printf("argument[%d]=%s\n",argc-1,argv[argc-1]);
		argc--;
	}
	return 0;
}
