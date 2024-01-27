//leap year using unary operator
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter year = ");
	scanf("%d",&a);
	(a%4==0?printf("It is LEAP Year"):printf("NOT a LEAP Year"));
	return 0;
}
