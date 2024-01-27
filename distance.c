//length between two points
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,f,g,h,i,j;
	printf("Enter two points(a,b), (c,d) for the distance to be calculated = ");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	e=c-a;
	f=d-c;
	g=pow(e,2);
	h=pow(f,2);
	i=g+h;
	j=sqrt(i);
	printf("the distance between the two points is = %f",j);
	return 0;
}
