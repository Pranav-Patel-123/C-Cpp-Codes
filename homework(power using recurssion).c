#include<stdio.h>
int pow1(int num,int power);
int p = 1;
void main()
{
    int num = 0;
    int power =0;
    printf("enter a number = \n");
    scanf("%d",&num);
    printf("enter a power = \n");
    scanf("%d",&power);
    printf("%d to the power %d is %d",num,power,pow1(num,power));
}
int pow1(int num,int power)
{
    if(power>0)
    {
        p *= num;
        power-- ;
        pow1(num,power);
    }
    else
        return p;    
}