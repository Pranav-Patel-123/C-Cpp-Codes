#include<stdio.h>
void swap(int *num1,int *num2);
void main()
{
    int num1 = 0, num2 = 0, *n1, *n2;
    n1 = &num1;
    n2 = &num2;
    printf("enter first number = ");
    scanf("%d",&num1);
    printf("enter second number = ");
    scanf("%d",&num2);
    printf("the initial num1 = %d and num2 = %d", num1, num2);
    swap(n1,n2);
    printf("\nthe final num1 = %d and num2 = %d", num1, num2);
}
void swap(int *num1,int *num2)
{
    int temp = 0;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}