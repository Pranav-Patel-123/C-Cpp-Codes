#include<stdio.h>
int main()
{
	int a,s=0,r,q;
	printf("enter a no. = ");
	scanf("%d",&a);
	do 
	{
		r=a%10;
		q=a/10;
		s=s+r;
		a=q;
	}while(a!=0);
	printf("%d",s);
	return 0;
}
