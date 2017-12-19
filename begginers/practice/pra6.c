#include <stdio.h>

int main(void) {
	int a;
	scanf("%d",&a);
	if((a%400==0)||((a%100!=0)&&(a%4==0)))
	printf("leap year");
	else
	printf("not an leap year");
	return 0;
}
