#include <stdio.h>

int main(void) {
	int num,fact=1;
	scanf("%d",&num);
	while(num!=0)
	{
		fact=num*fact;
		num--;
	}
	printf("enter the fact:%d",fact);
	return 0;
}
