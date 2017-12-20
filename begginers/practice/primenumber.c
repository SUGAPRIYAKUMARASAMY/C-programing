#include<stdio.h>
int main(void)
{
	int i,j,count=0;
	scanf("%d",&i);
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			count++;
			break;
		}
	}
	if(count>0)
	{
		printf("not a prime number");
	}
	else
	{
		printf("prime number");
	}
	return 0;
}
