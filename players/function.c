#include <stdio.h>

int main(void) {
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b=func(a,n);
	printf("%d",b);
	return 0;
}
int func(int c[],int x)
{
	int y=c[0];
	for(int i=0;i<x;i++)
	{
		if(y<c[i])
		{
			y=c[i];
		}
	}
	return y;
}
