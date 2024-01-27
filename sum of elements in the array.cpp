//sum of the elements in the array
#include<stdio.h>
int main()
{
	int a[5],i,b=0;
	printf("enter 5 numbers \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		b=b+a[i];
	}
	printf("sum = %d",b);
	return 0;
}
