#include <stdio.h>
int main()
{
	int a,i,ans=0;
	scanf("%d",&a);
	for(i=2;i<a/2;i++)
	{
	if(a%i==0)
	{
		ans=1;
		break;
	}}
	if(ans==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}

