#include<stdio.h>
int main(void)
{
	int n;
	int count=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("\n%d",count);
  return 0;
}
