#include<stdio.h>
int main(void)
{
	int low,upp,n,i;
	scanf("%d%d",&low,&upp);
	for(i=low;i<=upp;i++)
	{
		int rev=0,ams=0;
		n=i;
		while(n!=0)
		{
			rev=n%10;
			ams=ams+(rev*rev*rev);
			n=n/10;
			
		}
		if(i==ams)
		printf("%d\n",i);
	}
  return 0;
}
