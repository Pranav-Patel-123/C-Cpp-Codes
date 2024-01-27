//length and breath is input and calculate perimeter and area
#include<stdio.h>
int main ()
{
	float a,b,p,ar;
	printf("Enter length and Breadth respectively = ");
	scanf("%f %f",&a,&b);
	p=a+a+b+b;
	ar=a*b;
	printf("Perimeter = %f ",p);
	printf("Area = %f ",ar);
	return 0;
}
