#include<stdio.h>
int main()
{
	int a;
	char b;
	float c;
	double d;
	int long h;
	printf("int = %d byte\n",sizeof(a));
	printf("char = %d byte\n",sizeof(b));
	printf("float = %d byte\n",sizeof(c));
	printf("double = %d byte\n",sizeof(d));
	printf("long int = %d byte\n",sizeof(h));
	printf("int + float = %d byte\n",sizeof(a+c));
	printf("int + double = %d byte\n",sizeof(a+d));
	printf("int + char = %d byte\n",sizeof(a+b));
	printf("int + long int = %d byte\n",sizeof(a+h));
	return 0;
}
