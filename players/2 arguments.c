#include <stdio.h>

int main(int argc,char*argv[]) {
	if(argc==1)
	printf("two argument");
	else if(argc>=2)
	printf("many argument");
	else
	printf("one argument is expected");
	return 0;
}

