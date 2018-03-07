#include <stdio.h>
int main()
{
	int a,fact=1,b=0;
	scanf("%d",&a);
	if(a<=0)
	{
		printf("%d",b);
	}
	else
	{
		for(int i=1;i<=a;i++)
		{
			fact=fact*i;
		}
	printf("%d",fact);
	}
	return 0;
}
