#include<stdio.h>
int main(void)
{
	int m,n,ref;
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&ref);
	if(ref>=m && ref<=n)
	printf("yes");
	else
	printf("no");
	return 0;
}
