#include<stdio.h>

struct employee
{
    int Ph_no,dd,mm,yyyy;
    char name[50],post[20];
    float salary;
};
void main()
{
    int num;
    printf("enter the number of employee in the company = ");
    scanf("%d",&num);
    struct employee emp[num];
    int  a,d,m,y;
    for(int i=0;i<num;i++)
    {
        printf("enter name of employee\t");
        scanf("%s", &emp[i].name);
        printf("enter post of employee\t");
        scanf("%s",&emp[i].post);
        printf("enter salary( in Lakhs) of employee\t");
        scanf("%f",&emp[i].salary);
        printf("enter phone number of employee\t");
        scanf("%d",&emp[i].Ph_no);
        printf("enter date of joining of employee\t");
        scanf("%d%d%d",&emp[i].dd, &emp[i].mm, &emp[i].yyyy);
    }
        printf("name\t");
        printf("post\t");
        printf("salary(in LPA)\t");
        printf("phone number\t");
        printf("date of joining\n");
    for(int i=0;i<num;i++)
    {
        printf("%s\t", emp[i].name);
        printf("%s\t",emp[i].post);
        printf("%f\t",emp[i].salary);
        printf("%d\t",emp[i].Ph_no);
        printf("%d-%d-%d\n",emp[i].dd, emp[i].mm, emp[i].yyyy);
    }
}