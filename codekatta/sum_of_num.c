#include<stdio.h>
void main()
{
int a[4],i,j,c,n;
printf("\n enter num");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
 for(j=0;j<n;j++)
{
c=c+a[j];
}
Printf(“sum=%d”,c);
return 0;
}
