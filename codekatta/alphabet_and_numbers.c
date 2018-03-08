#include<stdio.h>
int main(void)
{
char a[20];
int i,alpha=0,digit=0;
scanf("%s",a);
for( i=0;a[i]='\0';i++)
{
	if((a[i]>='a'&& a[i]<='z') ||(a[i]>='A'&& a[i]<='Z'))
	{	alpha++;
		
	}
	if(a[i]>=0 && a[i]<=9)
	{	digit++;
		
	}
}
if(alpha>=1 && digit>=1)
	printf("yes");
else
	printf("no");
	
	return 0;
}
