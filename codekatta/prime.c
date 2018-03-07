#include<stdio.h>
int main(void)
{
    int n,count=0,i,rev=0,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n%i==0)   
        count++;
    }
    if(count==2)
    {
    	temp=n;
    	while(n!=0)
    	{
    		rev=rev*10;
		rev=rev+n%10;
		n=n/10;	
    	}
    	if(rev==temp)
    	printf("Yes");
    	else
    	printf("No");
    }
    else
    printf("No not a prime number");
    return 0;
}
