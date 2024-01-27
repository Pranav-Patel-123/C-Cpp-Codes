#include<stdio.h>
#include<math.h>
double facto(int n)
{
	double fact=1;
	for(int i = 2;i<=n;i++)
		fact*=i;
	return fact;
}
double power(double x,int n)
{
	int i;
	double pow=x;
	for(i=0;i<n-1;i++)
		pow*=x;
	return pow;
}
double exp1(double x)
{
	int i;
	double result=0,term=1;
	for(i=1;i<10;i++)
	{
		term = power(x,i)/facto(i);
		result +=term;
		return result;	
	}
}
int main()
{
//	int j;
//	for(j=1;j<11;j++)
//	printf("\nfcatorial of %d is %lf",j,fact(j));
//printf("%lf",power(2,6));
printf("our answer is %lf", exp1(1.2));
printf("\nlibrary function = %lf",exp(1.2));
	return 0;
}

