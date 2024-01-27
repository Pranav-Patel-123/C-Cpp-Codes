#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("enter a number = ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		s=s+i;	
	}
	printf("Sum = %d ",s);
	return 0;
}
