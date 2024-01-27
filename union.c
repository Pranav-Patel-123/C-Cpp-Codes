#include<stdio.h>
union xyz
{
    int x[4];
    char y[4];
    double z;
};
struct xyz1
{
    int x[4];
    char y[4];
    double z;
};
int main()
{
    printf("%d\n",sizeof(union xyz));
    return 0;
}