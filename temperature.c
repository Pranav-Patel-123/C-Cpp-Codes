//from temp in degree celsius to faranhite
#include<stdio.h>
int main ()
{
	int e;
  float f,g,h,i;
	float a,b,c,d;
	printf("enter the conversion that you want to perform\n1.degree to fahrenheit\n2.fahrenheit to degree\n");
	scanf("%d",&e);
switch(e)
{
	case 1:
		printf("Enter a temperature in degree Celsuis = ");
		scanf("%f",&a);
		b=a*1.8;
		c=b+32;
		printf("the temperature in Fahrenheit = %f",c);
	break;
	case 2:
		printf(" Enter a temperature in degree fahrenheit = ");
		scanf("%f",&f);
		g=f-32;
		h=g*0.5556;
		printf(" the temperature in Celsius = %f",i);
	break;
}
	return 0;
}
