#include <stdio.h>

int main(void) {
	char a;
	int b;
	scanf("%c",&a);
	b=(int)a;
	if((b<=65&&b>=96)||(b>=97&&b<=127))
	printf("alphabet");
	else
	printf("numbers");
	return 0;
}
