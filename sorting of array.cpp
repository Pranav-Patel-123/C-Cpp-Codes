// sorting of array
#include<stdio.h>
int main()
{
	int a[3],i;
	printf("enter 3 numbers \n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
/*	for(i=0;i<3;i++)
	{
		printf("%d\t",a[i]);
	}
*/
	if(a[0]>a[1]&&a[0]>a[2])
		{
			if(a[1]>a[2])
				printf("%d > %d > %d",a[0],a[1],a[2]);
			else
				printf("%d > %d > %d",a[0],a[2],a[1]);
		}
	else if(a[1]>a[0]&&a[1]>a[2])
		{
			if(a[0]>a[2])
				printf("%d > %d > %d",a[1],a[0],a[2]);
			else
				printf("%d > %d > %d",a[1],a[2],a[0]);
		}
	else 
		{
			if(a[0]>a[1])
				printf("%d > %d > %d",a[2],a[0],a[1]);
			else
				printf("%d > %d > %d",a[2],a[1],a[0]);	
		}
	return 0;
}
