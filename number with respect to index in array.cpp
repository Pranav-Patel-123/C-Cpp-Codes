//display the numbers with respect to index
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter 5 numbers \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("index %d = %d\n",i,a[i]);
	}
	return 0;
}
