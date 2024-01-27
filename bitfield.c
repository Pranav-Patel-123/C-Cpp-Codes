#include<stdio.h>
struct date1
{
    int d,m,y;
};
struct date2
{
   unsigned int d:33;
   unsigned int m:4;
   unsigned int y:12;
};

int main()
{
    struct date2 dob;
    dob.d=31;dob.m=12;dob.y=2022;
    printf("%2d/%2d/%2d\n",dob.d,dob.m,dob.y);
    // printf("%d\n",sizeof(struct date1));
    // printf("%d\n",sizeof(struct date2));
    return 0;
}