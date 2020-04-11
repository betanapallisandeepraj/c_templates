#include<stdio.h>
int main(int argc,char *argv[])
{
	int a=10;
	printf("if,if-else,switch programs added.\n");
	if(a==10) {
		printf("inside if\n");
	}

	if(a==9){
		printf("inside if in if-else\n");
	} else {
		printf("inside else in if-else\n");
	}
	
	switch(a) {
		case 5:
			printf("inside switch case 5\n");
			break;
		case 10:
			printf("inside switch case 10\n");
			break;
		default:
			printf("inside switch case default\n");
	}
	return 0;
}
