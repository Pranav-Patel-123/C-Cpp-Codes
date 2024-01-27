#include<stdio.h>
int main()
{
	int i,j,n,f=0;
	printf("enter a number = ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
	if(f==0)
		{
			printf("%d",i);
		}
	f=0;
	}
	return 0;
}
