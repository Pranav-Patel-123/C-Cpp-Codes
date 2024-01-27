#include<stdio.h>
#include<string.h>
int main()
{
	int x[20]={8,45,78,8,65,100,115,80,2,6,79,300},c,i,a,j;
	c=x[0];
	for(j=0;j<12;j++)
	{
		for(i=1;i<12;i++)
		{
			if(x[i]>c)
			{
				c=x[i];
				a=i+1;
			}
		}
			x[11-j]=c;
	}
	for(i=0;i<12;i++)
	{
		printf(" %d",x[i]);
	}
	return 0;
}
