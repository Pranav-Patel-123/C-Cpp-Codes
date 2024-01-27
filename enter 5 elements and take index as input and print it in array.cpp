//enter 5 elements and take index as input and print it
#include<stdio.h>
int main()
{
	int a[5],i,b;
	printf("Enter 5 numbers =\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the index number = ");
	scanf("%d",&b);
	printf("index %d = %d",b,a[b]);
	return 0;
}
