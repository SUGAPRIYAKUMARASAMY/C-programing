#include <stdio.h>

int main(void) {
	int n,p,temp,i;
	scanf("%d%d",&n,&p);
	temp=n;
	for(i=1;i<p;i++)
	{
		n=n*temp;
	}
	printf("%d",n);
	return 0;
}
