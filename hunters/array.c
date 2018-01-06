#include<stdio.h>
int main(void)
{
	int x,y,j,i;
	scanf("%d%d",&x,&y);
	int a[x],b[y];
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
		printf("%d",a[i]);
	}
	for(j=0;j<y;j++)
	{
		scanf("%d",&b[j]);
		printf("%d",b[j]);
	}
}
