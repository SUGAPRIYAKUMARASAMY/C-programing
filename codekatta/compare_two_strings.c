#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[1000],b[1000];
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)==strlen(b))
	printf("%s",b);
	else if(strlen(a)>strlen(b))
	printf("%s",a);
	else
	printf("%s",b);
	return 0;
}
