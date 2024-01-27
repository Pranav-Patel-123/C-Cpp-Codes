//calculator
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,x,y;
	printf("Enter the operation that you want to perform \n")	;
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n6.Square\n7.Square root\n");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
			printf("Enter two numbers = ");
			scanf("%d %d",&b,&c);
			printf("Sum = %d",b+c);
			break;
		case 2:
			printf("Enter two numbers = ");
			scanf("%d %d",&b,&c);
			printf("Difference = %d",b-c);
			break;
		case 3:
			printf("Enter two numbers = ");
			scanf("%d %d",&b,&c);
			printf("Product = %d",b*c);
			break;
		case 4:
			printf("Enter two numbers = ");
			scanf("%d %d",&b,&c);
			printf("Quotient = %d",b/c);
			break;
		case 5:
			printf("Enter two numbers = ");
			scanf("%d %d",&b,&c);
			printf("Remainder = %d",b%c);
			break;
		case 6:
			printf("Enter one numbers = ");
			scanf("%d",&b);
			y=pow(b,2);
			printf("Square = %d",y);
			break;
		case 7:
			printf("Enter one numbers = ");
			scanf("%d",&b);
			x=sqrt(b);
			printf("Square root = %d",x);
			break;
		default:
			printf("invalid operation");
			break;
	}
	return 0;
}
