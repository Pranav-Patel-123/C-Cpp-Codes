#include<stdio.h>
#define size 5

int top=-1;
int stack[size];
int choice=0;

int full();
int empty();
void insert(int x);
void delete();
void menu();
void display();


int main()
{
    int x;
    while(1)
    {
        menu();
        switch(choice)
        {
            case 1:
                printf("enter the element = ");
                scanf("%d",&x);
                insert(x);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            default:
                return 0;
        }
    }
}


int full()
{
    if(top==(size-1))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void insert(int x)
{
    if(full()==0)
    {
        printf("\n------------------------------------------------------------------------------");
        printf("\nCannot insert\nOverfull Occured\ni.e. Stack is already full\n");
        printf("------------------------------------------------------------------------------\n");
    }
    else
    {
        top++;
        stack[top]=x;
        printf("\n------------------------------------------------------------------------------");
        printf("\nElement inserted Successfully\n");
        printf("------------------------------------------------------------------------------\n");
    }
}
int empty()
{
    if(top==(-1))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void delete()
{
    if(empty()==0)
    {
        printf("\n------------------------------------------------------------------------------");;
        printf("\nCannot Delete\nUnderflow Occured\ni.e. Stack is empty\n");
        printf("------------------------------------------------------------------------------\n");
    }
    else
    {
        top--;
        printf("\n------------------------------------------------------------------------------");
        printf("\nElement deleted Successfully\n");
        printf("------------------------------------------------------------------------------\n");
    }
}
void menu()
{
    printf("\nselect the choice from the below - \n");
    printf("\t1.insert element\n");
    printf("\t2.delete element\n");
    printf("\t3.display stack\n");
    printf("\t4.quit\n");
    printf("Choice = ");
    scanf("%d",&choice);
}
void display()
{
    if(empty()==0)
    {
        printf("\n------------------------------------------------------------------------------");
        printf("\nthe Stack is empty\n");
        printf("------------------------------------------------------------------------------\n");
    }
    else
    {
        printf("Stack = ");
        for(int i=0;i<(top+1);i++)
        {
            printf("%d\t",stack[i]);
        }
        printf("\n");
    }
}
