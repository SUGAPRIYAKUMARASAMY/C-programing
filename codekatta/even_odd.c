#include<stdio.h>
int main()
{
	int a,b;
	printf("\nenter a  number:");
	scanf("%d",&a);
	b=(a%2==0)?printf("%d is even number",a):printf("%d is odd number",a);
            return 0;
}
