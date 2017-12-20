#include<stdio.h>
 
int main(void) {
	char a[5],temp;
	int i,b;
	scanf("%s",a);
	b=strlen(a);
	if(b%2==0)
	{
	for(i=0;i<b;i+=2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	}
	else
	{
	for(i=0;i<b-1;i+=2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	}
	for(i=0;i<b;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
 
