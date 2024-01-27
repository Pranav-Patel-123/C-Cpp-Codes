#include<stdio.h>
int main()
{
	int i,f=1,n;
	printf("enter a number = ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		f=f*i;	
	}
	printf("Factorial of %d = %d ",n,f);
	return 0;
}
