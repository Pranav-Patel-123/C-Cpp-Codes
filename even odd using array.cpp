//find the count of even no. and odd no. in array and print them
#include<stdio.h>
int main()
{
	int a[10],i,b=0,c=0;
	printf("enter 10 numbers \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			b=b+1;
		}
		else
		{
			c=c+1;
		}
	}
	printf("even nos. = %d \n",b);
	printf("odd nos. = %d \n",c);
	return 0;
}
