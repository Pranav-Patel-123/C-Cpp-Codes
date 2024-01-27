#include<stdio.h>
int main()
{
	int i,j;
	printf("the the number from where you have to start = ");
	scanf("%d",&i);
	printf("the the number where you have to end = ");
	scanf("%d",&j);
	while(i<=j)
	{
		if(i%2==0)
		printf("%d = even\n",i);
		else
		printf("%d = odd\n",i);
		i++;
	}
	return 0;
}
