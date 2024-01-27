//display 5 values from user and display it
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
		printf("%d\t",a[i]);
	}
	return 0;
}
