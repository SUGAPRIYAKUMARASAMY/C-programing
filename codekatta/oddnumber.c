#include<stdio.h>
int main(void)
{
	int n,l,i;
	scanf("%d",&n);
	scanf("%d",&l);
	for(i=n+1;i<l;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
  return 0;
}
