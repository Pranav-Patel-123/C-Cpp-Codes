#include<stdio.h>
int main()
{
	int a;
	//printf("enter marks = ") ;
	scanf("%d",&a);
	if(a<=40)
{
		printf("fail");
}
	else if (a>=41 &&  a<=70)
{
		printf("grade B");
}
	else if (a>=71 && a<=100)
	{
	printf("grade A");
	}
	return 0;
}
