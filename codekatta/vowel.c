#include <stdio.h>
#include<string.h>
int main() 
{
	char a[10];
	int n,i,flag=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
		flag++;
	}
	 if (flag>=1)
	printf ("\nYes");
	else
	printf("\nNo");
	return 0;
}

