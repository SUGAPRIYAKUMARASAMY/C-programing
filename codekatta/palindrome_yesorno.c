#include <stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	int i,n,flag=0;
	scanf("%s",a);
	n=strlen(a);
	for (i =n-1;i>= 0;i--)
	  {
		b[n - i - 1] = a[i];
	  }
 
	 for (flag = 1, i = 0; i < n ; i++)
	 {
		 if (b[i] != a[i])
		 flag = 0;
	}
	 if (flag == 1)
	printf ("\nYes");
	else
	printf("\nNo");
	return 0;
}
